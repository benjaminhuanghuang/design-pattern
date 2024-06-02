# Welcome to Design Patterns

- Disadvantages of using inheritance to provide Duck behavior?
Adding new behavior to the superclass will add behavior that was not appropriate for some Duck subclasses

- Disadvantages of using interfaces to provide behavior?
No code reuse, you’re often forced to track down and change it in all the different subclasses where that behavior is defined, probably introducing new bugs along the way!

HAS-A can be better than IS-A

Design principle: Identify the aspects of your application that vary and separate them from what stays the same.
take the parts that vary and encapsulate them, so that later you can alter or extend the parts that vary without affecting those that don’t.
let some part of a system vary independently of all other parts.

## Strategy Pattern

We’ll use an interface to represent each behavior—for instance, FlyBehavior and QuackBehavior—and each implementation of a behavior will implement one of those interfaces.

```java

modelDuck.setFlyBehavior(new FlyRocketPowered());
modelDuck.performFly();
```
