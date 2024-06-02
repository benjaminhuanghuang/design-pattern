# The Adapter Pattern

This pattern converts the interface of a class into another interface that clients expect.
It allows classes to work together that couldn't otherwise because of incompatible interfaces.

The client is composed with the class with the target interface
The adapter is composed with the adaptee
The adapter delegates calls to the adaptee, and returns any needed value
The client and the adaptee don't know there's an adapter in between


Convert a Turkey into a Duck.

```java
public TurkeyAdapter implements Duck {
    Turkey turkey;

    public TurkeyAdapter(Turkey turkey) {
        this.turkey = turkey;
    }

    public void quack() {
        turkey.gobble();
    }

    public void fly() {
        turkey.fly();
    }
}

// Test the Turkey
Duck turkeyAdapter = new TurkeyAdapter(turkey);
testDuck(turkeyAdapter);

```
