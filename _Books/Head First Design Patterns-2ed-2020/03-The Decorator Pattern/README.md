# The Decorator Pattern

Beverage and condiments with inheritance has not worked out very well—we get class explosions and rigid designs, or we add functionality to the base class that isn’t appropriate for some of the subclasses.

```java
Beverage beverage = new Espresso();

Beverage beverage2 = new DarkRoast();
beverage2 = new Mocha(beverage2);    // Add Mocha
beverage2 = new Mocha(beverage2);    // Add Mocha
beverage2 = new Whip(beverage2);

```

Real-world example: Java I/O classes
