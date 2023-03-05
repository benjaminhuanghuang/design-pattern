# Singleton Design Pattern

## Intent
Ensure a class has only one instance, and provide a global point of access to it.
Encapsulated "just-in-time initialization" or "initialization on first use".

## Problem
Application needs one, and only one, instance of an object. Additionally, lazy initialization and global access are necessary.

- Lifetime issue
- Initialization


## Use cases
When there must be exactly one instance of a class.


##
- 绕过 new 
C++ use private
```
  private:
    Singleton(){}; 
    Singleton &operator=(Singleton const &rhs);   
    Singleton(Singleton const &);
```  

- 逻辑上只应该有一个实例
- 性能要求只有一个实例



## CPU reorder 导致 双检查锁失效


```
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
```

```
instance = new Singleton;
```
分为3步
1. 分配内存
2. 调用构造器
3. 赋值
会被reorder成
分配内存 -> 赋值 -> 调用构造器 
第二个线程会拿到一个没有初始化的object
