class House
{

public:
  virtual ~House() {}
};

class HouseBuilder
{
public:
  House *createHouse()
  {
    return pHouse;
  }
  virtual ~HouseBuilder() {}

  House *pHouse;
  virtual void BuildPart1() = 0;
  virtual void BuildPart2() = 0;
  virtual void BuildPart3() = 0;

};


class StoneHouse : public House
{
};

class StoneHouseBuilder : public HouseBuilder
{
protected:
  virtual void BuildPart1(){};
  virtual void BuildPart2(){};
  virtual void BuildPart3(){};
};

class HouseDirector
{
public:
  HouseBuilder *pHouseBuilder;
  HouseDirector(HouseBuilder *pbuilder){
    pHouseBuilder = pbuilder;   
  }
  
  House *Construct()
  {
    pHouseBuilder->BuildPart1();
    pHouseBuilder->BuildPart2();
    pHouseBuilder->BuildPart3();
  }
};


void main(){
  House* house = HouseDirector(new StoneHouseBuilder()).Construct();

}