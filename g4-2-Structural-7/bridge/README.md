# Bridge Design Pattern
## Intent
Decouple an abstraction from its implementation so that the two can vary independently.
Publish interface in an inheritance hierarchy, and bury implementation in its own inheritance hierarchy.
Beyond encapsulation, to insulation

## Problem
"Hardening of the software arteries" has occurred by using subclassing of an abstract base class to provide alternative implementations. This locks in compile-time binding between interface and implementation. The abstraction and implementation cannot be independently extended or composed.


## 
应对对象多个纬度的变化
将抽象部分/业务功能和实现部分/平台实现分离
用组合解耦合
