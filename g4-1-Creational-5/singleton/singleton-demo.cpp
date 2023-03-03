class A
{
public:
  static A &getInstance() { return a; };

private:
  A();
  static A a;
};

// Better
class A
{
public:
  static A &getInstance();

private:
  A();
};

A &A::getInstance()
{
  static A a;  // created when needed
  return a;
}
