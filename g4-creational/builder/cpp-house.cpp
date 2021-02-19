class House{

public:
  virtual ~House(){}
  void Setup(){
    this->BuildPart1();

    this->BuildPart2();

    this->BuildPart3();
  }
protected:
  virtual void BuildPart1()=0;
  virtual void BuildPart2()=0;
  virtual void BuildPart3()=0;
};


class StoneHouse:public House{
protected:
  virtual void BuildPart1(){};
  virtual void BuildPart2(){};
  virtual void BuildPart3(){};
};