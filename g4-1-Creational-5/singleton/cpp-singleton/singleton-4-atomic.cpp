#include <iostream>
#include <string>
#include <mutex>

using namespace std;

class Singleton
{
public:
  static Singleton *getSingleton()
  {
    Singleton *tmp = instance.load(memory_order_relaxed);
    atomic_thread_fence(memory_order_acquire);
    if (tmp == nullptr)
    {
      mtx.lock();   // 两个写线程会同时到达这里
      if (instance == nullptr)   // 
      {
        instance = new Singleton;
        atomic_thread_fence(memory_order_relaxed);
        Singleton::instance.store(tmp, memory_order_relaxed)
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
atomic<Singleton *> Singleton::instance;

int main(int argc, char *argv[])
{

  //Get instance create single object.
  Singleton::getSingleton()->sayHello("Hello world!!! \n");

  return 0;
}