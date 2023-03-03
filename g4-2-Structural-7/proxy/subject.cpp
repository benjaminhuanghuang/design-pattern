class ISubject{
  public:
  virtual void process();
}


class RealSubject: public ISubject{
  public:
  virtual void process(){

  }
}


class RealSubject: public ISubject{
  public:
  virtual void process(){
    // access the RealSubject
  }
}

class Client{
  ISubject *subject;

  public:
  Client(){
    suject = new SubjectProxy();
  }
  void DoTask(){
    subject->process()
  }
}
