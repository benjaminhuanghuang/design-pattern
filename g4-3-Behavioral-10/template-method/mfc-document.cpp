class CDocument
{
public:
  void OnFileOpen()
  {
    Serialize();
  };
  // The tempalte method
  virtual void Serialize();
};

class CMyDoc : public CDocument
{
  virtual void Serialize(){

  };
};

int main()
{
  CMyDoc myDoc;
  myDoc.OnFileOpen();

  return 0;
}