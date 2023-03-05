# C# 10 Design Patterns
by Kevin Dockx
https://www.kevindockx.com/

https://app.pluralsight.com/library/courses/c-sharp-10-design-patterns/
https://github.com/kevinDockx/CSharp10DesignPatterns

- Intent of the pattern
- Structure of the pattern
- Real-life pattern implementation
- Pattern use cases, consequences, advantages/disadvantages, related patterns

Don't learn the pattern implementation from the top of your head, learn which problem a pattern solves

## Creational Pattern x 5
### Singleton
 Its intent is to ensure that a class only has `one instance` and to provide a `global point` of access to it.

### Factory
instantiation to one or more subclasses

Its intent is to `define an interface for creating an object`, but to let subclasses decide which class to instantiate. In other words, factory method lets a class defer instantiation to subclasses.  

Real-life sample: create correct discount service for different product and country

### Abstract Factory
The intent of the abstract factory pattern is to provide an interface for creating `families of related or dependent objects` without specifying their concrete classes

One factory create families of objects
```
    public interface IShoppingCartPurchaseFactory
    {
        IDiscountService CreateDiscountService();
        IShippingCostsService CreateShippingCostsService();
    }
```

### Builder
The intent of the builder pattern is to separate the construction of a complex object from its representation. By doing this, the same construction process can create different representations.

For example, a car is a complex object consisting of different parts, a Builder abstract class defines the common building process adn creating a Car independent of the parts that make up the car and how they are assembled.
Different builder builds different Car.

### Prototype
Its intent is to specify the kinds of objects to create using a prototypical instance and create new objects by `copying this prototype`.

Avoid building a set of factories that mimic the class hierarchy,

Starting from a clone will often be more convenient than starting from an instance with default values

## Structural Pattern x 7

### Adapter
Its intent is to convert the interface of a class into another interface the client expects. 

ClassAdapter: relies on inheritance

ObjectAdapter: relies on composition

## Bridge
Bridge is a structural design pattern that lets you split a large class or a set of closely related classes into two separate hierarchies—abstraction and implementation—which can be developed independently of each other

The intent is to decouple an abstraction from its implementation so the two can vary independently.

For example, we have abstract Menu class and implementation VegeMenu, MeatMenu....
We also HolidayCoupon, NewYearCoupon... subclassing is not the goode way to add functionality. 

To combine the menu and coupon, we add a ICoupon field in the Menu, the ICoupon is a bridge.


### Decorator
This pattern allows `adding behavior` dynamically to an individual object without affecting the behavior of other instances of the same class.

Subclass is a wrapper of base class

### Composite
Its intent is to compose objects into tree structures to represent part‑whole hierarchies. Like from components, file system

### Facade
It is intended to provide a higher‑level interface over a subsystem to make the subsystem easier to use. 

### Proxy
It is intended to provide a agent or placeholder for another object to control or restriction to access the target object.

The proxy does not change the interface

### Flyweight
flyweight pattern is used to `sharing` to support large numbers of fine‑grained objects efficiently.

As storage cost high, use large number of objects, most object state be made extrinsic


## Behavioral Pattern x 11

### Template Method
Its intent is to define a skeleton of an algorithm in an operation, deferring some steps to subclasses.

### Strategy
Its intent is to define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

Set strategy to a property or pass in the strategy as a parameter

### Command
It allows us to encapsulate requests as objects.thereby letting you parameterize clients with different requests, queue, or log requests, and support undoable operations.
```
    viewModel.SomeCommand.CanExecute()

    viewModel.SomeCommand.Execute()
```


### Memento
Sometimes called the token pattern. It's all about capturing and externalizing an object's internal state. 

```
private readonly Stack<AddEmployeeToManagerListMemento> _mementos = new ();


if (command.CanExecute())
{
    command.Execute();
    _mementos.Push(command.CreateMemento());
}

public void Undo()
{
    if (_mementos.Any())
    {
        _command?.RestoreMemento(_mementos.Pop());
        _command?.Undo(); 
    }
}
```

### Mediator
The intent of the mediator pattern is to define an object that encapsulates how a set of objects interact. 

It does that by forcing objects to communicate via that mediator. 

By doing so, it promotes loose coupling by keeping objects from referring to each other explicitly, and it also lets you vary their interaction independently. 


### Chain of Responsibility
Its intent is to avoid coupling the sender of request to its receiver by giving more than one object a chance to handle the request. 

Without Chain of Responsibility
```
public bool Validate() {
    if (doc.Title ....) {
        return false;
    }

    if (doc.Version ....) {
        return false;
    }

    if (doc.Approved ....) {
        return false;
    }
    return true;
}
```
With Chain of Responsibility
```
var documentHandlerChain = new DocumentTitleHandler();

documentHandlerChain
    .SetSuccessor(new DocumentLastModifiedHandler())
    .SetSuccessor(new DocumentApprovedByManagementHandler());

documentHandlerChain.Handle(validDocument);

```


### Observer
Observer is listener

Its intent is to define a one‑to‑many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

Example:
```
public void AddObserver(ITicketChangeListener observer)
{
    _observers.Add(observer);
}

public void Notify(TicketChange ticketChange)
{
    foreach (var observer in _observers)
    {
        observer.ReceiveNotification(ticketChange);
    }
}
```


### State
Its intent is to allow an object to alter its behavior when its internal state changes

Example:
```
 public override void Withdraw(decimal amount)
{
    Balance -= amount;
    if (Balance < 0)
    {
        // change state to overdrawn
        BankAccount.BankAccountState = new OverdrawnState(Balance, BankAccount);
    }
}

public override void Deposit(decimal amount)
{
    Balance += amount;
    if (Balance >= 1000)
    {
        // change state to gold
        BankAccount.BankAccountState = new GoldState(Balance, BankAccount);
    }
}

public void Deposit(decimal amount)
{
    // let the current state handle the deposit
    BankAccountState.Deposit(amount);
}

public void Withdraw(decimal amount)
{
    // let the current state handle the withdrawel
    BankAccountState.Withdraw(amount);
}
```


### Iterator
Its intent is to provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.




### Visitor
A visitor represents an operation that has to be performed on the elements of an object structure. 

Visitor lets you define a new operation without changing the classes of the elements.


### Interpreter

It's used to define grammar and interpret languages.