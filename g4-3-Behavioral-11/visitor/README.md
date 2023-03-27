# Visitor Design Pattern

It is used to change the behavior of a class
lets you separate algorithms from the objects on which they operate.

Visitor is a behavioral design pattern that allows `adding new behaviors` to existing class hierarchy `without` altering any existing code.

The element object has to accept the visitor object so that the visitor object handles the operation on the element object.

The Visitor Design Pattern should be used when you have distinct and unrelated operations to perform across a structure of objects (element objects). This avoids adding in code throughout your object structure that is better kept separate.

The Visitor pattern suggests that you place the new behavior into a separate class called `visitor`, instead of trying to integrate it into existing classes. The original object that had to perform the behavior is now passed to one of the visitor’s methods as an argument, providing the method access to all necessary data contained within the object.

However, the Visitor pattern addresses this problem. It uses a technique called Double Dispatch, They "accept" a visitor and tell it what visiting method should be executed.
The visitor class may define not one, but a set of methods, each of which could take arguments of different types, like this:
```
// Client code
foreach (Node node in graph)
    node.accept(exportVisitor)

// City
class City is
    method accept(Visitor v) is
        v.doForCity(this)
    // ...

// Industry
class Industry is
    method accept(Visitor v) is
        v.doForIndustry(this)
    // ...
```

## Intent
Represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.
The classic technique for recovering lost type information.
Do the right thing based on the type of two objects.
Double dispatch

## Problem
Many distinct and unrelated operations need to be performed on node objects in a heterogeneous aggregate structure. You want to avoid "polluting" the node classes with these operations. And, you don't want to have to query the type of each node and cast the pointer to the correct type before performing the desired operation.

## 
不改变base class

## When to use Visitor Design Pattern in C#?
- An object structure must have many unrelated operations to perform on it.
- An object structure cannot change but operations performed on it can change.
- The operations need to perform on the concrete classes of an object structure.
- Exposing the internal state or operations of the object structure is acceptable.
- Operations should be able to operate on multiple object structures that implement the same interface.


## Use cases
- When an object structure contains many classes of objects with different interfaces, and you want to perform operations on them depending on their concrete classes

- When the classes defining your object structure don't have to change often, but you do often want to define new operations over the structure

