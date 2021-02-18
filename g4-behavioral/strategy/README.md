

## Intent
Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from the clients that use it.
Capture the abstraction in an interface, bury implementation details in derived classes.

## Problem
One of the dominant strategies of object-oriented design is the "open-closed principle".

## 
把算法封装成对象，在运行时改变算法， 消除 代码中的 if... else, switch...case

当出现新的算法时，无需修改代码（Open Close Principle）
```
  calss BaseStrategy {

  }

  class XXXStragety : public BaseStrategy{

  }

  class Worker{
    BaseStragegy *stragegy;   // passed from outside

    //
    void Run(){
      stragegy->run();       // 多态调用 
    }    
  }
```
如何创建 Strategy： 需要使用Factroy Pattern







