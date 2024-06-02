# The Strategy Pattern

Inheritance: subclass have a IS-A relationship with the superclass.

## Limitations of Inheritance

Add a new behavior to a superclass, all subclasses will inherit that behavior.

All behaviors are inherited, even if they are not appropriate.

All behavior are defined at compile time, runtime behavior changes are not possible.

## Interface

It destroys code reuse, every class that implements the interface has to implement the method.
Does not allow runtime behavior changes.

## Design Principle

Encapsulate What Varies: Once you separate the parts that are changing, you can then modify those parts without affecting the rest of the code.


## Strategy Pattern

```java
public abstract class Duck {
    // strategy
    FlyBehavior flyBehavior;
    QuackBehavior quackBehavior;

    // reuse code
    abstract void display();

    public void performFly() {
        flyBehavior.fly();
    }

    public void performQuack() {
        quackBehavior.quack();
    }
}
```

## Challenges
