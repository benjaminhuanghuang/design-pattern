# Chapter 4. Baking with OO Goodness: The Factory Pattern

Start from if-else or switch-case statements

```java
Pizza pizza;
if(type == "cheese") {
    pizza = new CheesePizza();
} else if (type == "greek") {
    pizza = new GreekPizza();
}
...
```

Encapsulating object creation (this if else or switch case) block

```java
pizza = factory.orderPizza("cheese");
```

The Factory Method Pattern defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
