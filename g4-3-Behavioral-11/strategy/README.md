

## Intent
Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from the clients that use it.
Capture the abstraction in an interface, bury implementation details in derived classes.

## Problem
One of the dominant strategies of object-oriented design is the "open-closed principle".

## Implementation 
- Defines a family of algorithms
- Encapsulates each algorithm
- Makes the algorithms interchangeable within that family.

Set strategy to a property or pass in the strategy as a parameter

把算法封装成对象，在运行时改变算法， 消除 代码中的 if... else, switch...case

当出现新的算法时，无需修改代码（Open Close Principle）
```
  class BaseStrategy {

  }

  class XXXStrategy : public BaseStrategy{

  }

  class Worker{
    BaseStrategy *strategy;   // passed from outside

    //
    void Run(){
      strategy->run();       // 多态调用 
    }    
  }
```
如何创建 Strategy： 需要使用Factory Pattern


## Pros
1. Adding a new strategy will never disturb any previous code.
2. Removal/Refactoring of any previous strategy is flexible.
3. Easy to test single units.




