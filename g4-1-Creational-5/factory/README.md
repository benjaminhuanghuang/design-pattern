# Factory Method

## Intent
Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
Defining a "virtual" constructor.
The new operator considered harmful.

## Problem
A framework needs to standardize the architectural model for a range of applications, but allow for individual applications to define their own domain objects and provide for their instantiation.




##
避免紧耦合 new ClassName()
实现多态new
Factory 基类定义创建对象的接口，由子类来控制生成哪个对象
```
  Factory *factory;
  IWorker *worker = factory.CreateWorker() 
```
