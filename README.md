# Design Pattern

## What
某类问题及其解决方案的核心， 可复用， OO

Flexibale, maintinable ane extensible

- Creational patterns are focused on instantiating objects in a way that hides the mechanisms of their creation from the rest of the program. Make decison at run time.
  - Abstract Factory: Creates an instance of several families of classes
  - Builder: Separates object construction from its representation
  - Factory Method: Creates an instance of several derived classes
  - Object Pool: Avoid expensive acquisition and release of resources by recycling objects that are no longer in use
  - Prototype: A fully initialized instance to be copied or cloned
  - Singleton: A class of which only a single instance can exist

- Structural patterns simplify the **relationships and hierarchies** between different classes and how they can be used to build larger and more complex entities. 
  - Adapter: Match interfaces of different classes
  - Bridge: Separates an object's interface from its implementation
  - Composite: A tree structure of simple and composite objects
  - Decorator: Add responsibilities to objects dynamically
  - Facade: A single class that represents an entire subsystem
  - Flyweight: A fine-grained instance used for efficient sharing
  - Private Class Data: Restricts accessor/mutator access
  - Proxy: An object representing another object

- Behavioral patterns provide common ways objects can **communicate** with one another
  - Chain of responsibility: A way of passing a request between a chain of objects
  - Command: Encapsulate a command request as an object
  - Interpreter: A way to include language elements in a program
  - Iterator: Sequentially access the elements of a collection
  - Mediator: Defines simplified communication between classes
  - Memento: Capture and restore an object's internal state
  - Null Object: Designed to act as a default value of an object
  - Observer: A way of notifying change to a number of classes
  - State: Alter an object's behavior when its state changes
  - Strategy: Encapsulates an algorithm inside a class
  - Template method: Defer the exact steps of an algorithm to a subclass
  - Visitor: Defines a new operation to a class without change

## Target
- 松耦合设计思想
- OO design 原则
  - 封装，隐藏内部实现
  - 继承，复用现有代码
  - 多态，改写对象行为
- Refactor, better design


## How
- 静态       ->  动态
- 早绑定     ->  晚绑定
- 继承       ->  组合
- 编译时依赖  ->  运行时依赖
- 紧耦合     ->  松耦合



## 