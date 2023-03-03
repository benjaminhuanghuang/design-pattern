#include <iostream>
#include <string>
#include <mutex>

using namespace std;

class Singleton
{
public:
  static Singleton *getSingleton()
  {
    // Lock 效率不好，会block读操作
    mtx.lock();  
    if (instance == nullptr)   
    // 非线程安全， 多个线程会同时到达这一行，各自调用 new Singleton;
    { // Only allow one instance of class to be generated.
      instance = new Singleton;
    }
    mtx.unlock();  
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