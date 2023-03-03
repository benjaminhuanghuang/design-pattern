# Visitor Design Pattern

It is used to change the behavior of a class

Visitor is a behavioral design pattern that allows `adding new behaviors` to existing class hierarchy `without` altering any existing code.

As per the Visitor Design Pattern, the element object has to accept the visitor object so that the visitor object handles the operation on the element object.

The Visitor Design Pattern should be used when you have distinct and unrelated operations to perform across a structure of objects (element objects). This avoids adding in code throughout your object structure that is better kept separate.

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