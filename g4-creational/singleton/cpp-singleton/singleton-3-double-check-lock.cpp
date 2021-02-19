#include <iostream>
#include <string>
#include <mutex>

using namespace std;

class Singleton
{
public:
  static Singleton *getSingleton()
  {
    // Double check Lock
    if (instance == nullptr)
    {
      mtx.lock();   // 两个写线程会同时到达这里
      if (instance == nullptr)   // 
      {
        instance = new Singleton;
      }
      mtx.unlock();
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
  Singleton(){};                              //Private so cannot be invoked.
  Singleton &operator=(Singleton const &rhs); //Private so cannot be invoked.
  Singleton(Singleton const &);

  static Singleton *instance;
  static std::mutex mtx;
};

// init the static variable
Singleton *Singleton::instance = nullptr;

int main(int argc, char *argv[])
{

  //Get instance create single object.
  Singleton::getSingleton()->sayHello("Hello world!!! \n");

  return 0;
}