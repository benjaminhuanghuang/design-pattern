# Observer
Observer is listener

## Intent
Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
Encapsulate the core (or common or engine) components in a Subject abstraction, and the variable (or optional or user interface) components in an Observer hierarchy.
The "View" part of Model-View-Controller.

## Problem
A large monolithic design does not scale well as new graphing or monitoring requirements are levied.


##
ProgressBar 和 worker
Naive design会把ProgressBar传入 worker， 由 worker来调用ProgressBar
违背了依赖倒置原则： ProgressBar是细节，

Design2: 传入 IProgress/Observer 接口。 缺点是无法支持多个接收者

Observer 模式对 观察者和目标对象进行解耦合

Observer 模式 需要 add(), remove(), iterator用来遍历所有的接收者

## Example
```
public void Notify(TicketChange ticketChange)
{
    foreach (var observer in _observers)
    {
        observer.ReceiveTicketChangeNotification(ticketChange);
    }
}
```
