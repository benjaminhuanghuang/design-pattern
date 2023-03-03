#include <iostream>
#include <string>

using namespace std;

class Singleton
{
public:
  static Singleton *getSingleton()
  {
    if (!instance)   
    // 非线程安全， 多个线程会同时到达这一行，各自调用 new Singleton;
    { // Only allow one instance of class to be generated.
      instance = new Singleton;
    }
    return instance;
  }

  void sayHello(string str)
  {
    cout << "Hello from singleton \n"
         << str;
  }

private:
  /* 如果不写，编译器会自动生成*/
  Singleton(){};                                //Private so cannot be invoked.
  Singleton &operator=(Singleton const &rhs);   //Private so cannot be invoked.
  Singleton(Singleton const &);
  
  static Singleton *instance;
};

// init the static variable
Singleton *Singleton::instance = nullptr;

int main(int argc, char *argv[])
{

  //Get instance create single object.
  Singleton::getSingleton()->sayHello("Hello world!!! \n");

  return 0;
}