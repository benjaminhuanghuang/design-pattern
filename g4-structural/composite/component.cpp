#include <vector>
using namespace std;

class Component
{
private:
  int m_value;

public:
  Component(int val) : m_value(val) {}

  // Here we use an empty funciton instead of pure virtual function,
  // because Primitive class do not need to override it.
  virtual void add(Component *){};
};

class Primitive : public Component
{
public:
  Primitive(int val) : Component(val)
  {
  }
};

class Composite : public Component
{
private:
  // compose
  vector<Component *> children;

public:
  Composite(int val) : Component(val)
  {
  }
  void add(Component *element)
  {
    children.push_back(element);
  }
};