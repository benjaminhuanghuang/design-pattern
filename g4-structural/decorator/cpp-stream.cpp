class Stream
{
public:
  virtual char Read(int number) = 0;
  virtual void Seek(int position) = 0;
  virtual char Write(char data) = 0;

  virtual ~Stream()
  {
  }
};

class FileStream : public Stream
{
public:
  virtual char Read(int number) override {}
  virtual void Seek(int position) override {}
  virtual char Write(char data) override {}
};

// FileStream 不需要 *stream 成员，为了提供*stream
// 需要一个DecoratorStream
class DecoratorStream: public Stream
{
protected:
  Stream *stream;
  DecoratorStream(Stream *s) :stream(s){}
};

class CryptoStream : public DecoratorStream
{
public:
  CryptoStream(Stream *s) :DecoratorStream(s){}
  virtual char Read(int number) override {}
  virtual void Seek(int position) override {}
  virtual char Write(char data) override {}
};

class BufferStream : public DecoratorStream
{
public:
  BufferStream(Stream *s) :DecoratorStream(s){}
  virtual char Read(int number) override {}
  virtual void Seek(int position) override {}
  virtual char Write(char data) override {}
};


void process(){
  FileStream *s1 = new FileStream();
  // Crypto file stream
  CryptoStream *s2 = new CryptoStream(s1);
  // Buffer and Crypto
  BufferStream *s3 = new BufferStream(s2);
}