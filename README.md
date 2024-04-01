# Design Pattern

- Design Patterns in software development are a `reusable solution` to a `commonly occurring problem` in software design.
- Design patterns provide a `common vocabulary` and understanding for developers to communicate and solve problems more efficiently.
- They help to promote code 
  - reusability
  - maintainability
  - extensibility
  - scalability.

## Creational - How objects created

Creational patterns are focused on `instantiating` or `creation` objects in a way that `hides` the mechanisms of their creation from the rest of the program. 

Make decision at run time.

- Abstract Factory: Creates an instance of several families of classes
- Builder: Separates object construction from its representation
- Factory Method: Creates an instance of several derived classes
- Object Pool: Avoid expensive acquisition and release of resources by recycling objects that are no longer in use
- Prototype: A fully initialized instance to be copied or cloned
- Singleton: A class of which only a single instance can exist

## Structural - How objects relate to each other

Structural patterns simplify the `relationships and hierarchies` between different classes and how they can be used to build larger and more complex entities. 

- Adapter: Match interfaces of different classes
- Bridge: Separates an object's interface from its implementation
- Composite: A tree structure of simple and composite objects
- Decorator: Add responsibilities to objects dynamically
- Facade: A single class that represents an entire subsystem
- Flyweight: A fine-grained instance used for efficient sharing
- Private Class Data: Restricts accessor/mutator access
- Proxy: An object representing another object

## Behavioral - How objects communicate with each other

- Chain of responsibility: A way of passing a request between a chain of objects
- Command: Encapsulate a command request as an object
- Interpreter: A way to include language elements in a program
- Iterator: Sequentially access the elements of a collection
- Mediator: Defines simplified communication between classes
- Memento: Capture and restore an object's internal state
- Null Object: Designed to act as a default value of an object
- Observer: A way of notifying change to a number of classes
- State: Alter an object's behavior when its state changes
- Strategy: Encapsulates an algorithm inside a class
- Template method: Defer the exact steps of an algorithm to a subclass
- Visitor: Defines a new operation to a class without change
