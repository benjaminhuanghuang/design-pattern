# The Decorator Pattern

This pattern attaches additional responsibilities to an object dynamically.
Decorators provide a flexible alternative to subclassing for extending functionality.

The Open-Closed Principle: Classes should be open for extension but closed for modification.
Extend the existing code without changing it.

## Using Composition

We can still "inherit" behavior
We can make dynamic runtime decisions
We can add new behavior without altering existing code
We can include behaviors not considered by the creator

```java
public abstract class Beverage {
    String description = "Unknown Beverage";

    public String getDescription() {
        return description;
    }

    public abstract double cost();
}

public Whip extends CondimentDecorator {
    Beverage beverage;

    public Whip(Beverage beverage) {
        this.beverage = beverage;
    }

    // Extend the getDescription method
    public String getDescription() {
        return beverage.getDescription() + ", Whip";
    }

    // Extend the cost method
    public double cost() {
        return .10 + beverage.cost();
    }
}
```
