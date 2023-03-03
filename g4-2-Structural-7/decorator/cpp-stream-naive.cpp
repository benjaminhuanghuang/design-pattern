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

class CryptoFileStream : public FileStream
{
public:
  virtual char Read(int number) override {}
  virtual void Seek(int position) override {}
  virtual char Write(char data) override {}
};

class BufferStream : public FileStream
{
public:
  virtual char Read(int number) override {}
  virtual void Seek(int position) override {}
  virtual char Write(char data) override {}
};

