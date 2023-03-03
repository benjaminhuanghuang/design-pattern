class ISplitter{
  public:
    virtual ISplitter *clone()= 0;
    virtual ~ISplitter(){}
};


class BinarySplitter: public ISplitter{
  public:
  virtual ISplitter* clone(){
    return new BinarySplitter(*this);
  }
};

