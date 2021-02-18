#include <iostream>
#include <mutex>

void do_work()
{
  std::mutex mt;

  mt.lock();

  //-- do stuff

  mt.unlock();
}

class Lock
{
  std::mutex &mtx;

public:
  Lock(std::mutex &m) : mtx{m}
  {
    std::cout << "Locking" << std::endl;
    mtx.lock();
  }

  ~Lock()
  {
    std::cout << "Unlocking" << std::endl;
    mtx.unlock();
  }
};

int main(){
  std::mutex mt;
  std::cout << "Starting...." << std::endl;

  try{
    Lock l(mt);
    std::cout << "Doing stuff...." << std::endl;
    throw std::exception();
  }
  catch(...){
    std::cout << "Execption caught...." << std::endl;
  }

  std::cout << "Done" << std::endl;

  return 0;
}