
# Description
    - Provide an interface for creating families of related objects without specifying their concrete

# How to
    - Create the family of interface or abstract base classes
    - Create the concrete classes for each of these
    - Create an abstract factory which applies to the whole family
    - Create a concrete factory for each base class
    
        A benefit of the Abstract Factory that is usually not very visible from a user's
    point of view when using the Factory Method is that it gives us _the ability to modify
    the behavior of our application dynamically (in runtime) by changing the active
    Factory Method_. 
    
        In a statically typed language, the Abstract Factory would be an abstract class/interface 
    with empty methods, but in Python this is not required because the types are checked in runtime
    
# Comparison
        The Abstract Factory design pattern is a generalization of Factory Method. Basically,
    an Abstract Factory is a (logical) group of Factory Methods, where each Factory Method 
    is responsible for generating a different kind of object 
    
        How do we know when to use the Factory Method versus using an Abstract Factory? 
            The answer is that we usually start with the Factory Method which is simpler. 
        If we find out that our application requires many Factory Methods which it makes sense 
        to combine for creating a family of objects, we end up with an Abstract Factory.

# Real-life example
        Abstract Factory is used in car manufacturing. The same machinery is used for stamping 
    the _parts_ (doors, panels, hoods, fenders, and mirrors) of different _car models_. The model 
    that is assembled by the machinery is configurable and easy to change at any time.

# Software example
        The classic example is giving the ability to change the look and feel
    of an application (for example, Apple-like, Windows-like, and so on) for the user
    while the application is in use, without the need to terminate it and start it again
    
# Use Case
        Imagine that we are creating a game to entertain our users. We want to include at least 
    two games, one for children and one for adults. We will decide which game to create and 
    launch in runtime, based on user input. An Abstract Factory takes care of the game creation part.