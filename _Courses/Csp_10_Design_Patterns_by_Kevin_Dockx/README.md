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







