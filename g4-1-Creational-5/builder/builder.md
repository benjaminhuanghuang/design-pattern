
# Description


# Comparison
        The main difference is that a Factory pattern creates an object in a single step, 
    whereas a Builder pattern creates an object in multiple steps.
        Another difference is that while a Factory pattern returns a created object
    immediately, in the Builder pattern the client code explicitly asks the director
    to return the final object when it needs it

    A Builder pattern is usually a better candidate than a Factory pattern when:
        • We want to create a complex object (an object composed of many parts
          and created in different steps that might need to follow a specific order).
        • Different representations of an object are required, and we want to keep
          the construction of an object decoupled from its representation
        • We want to create an object at one point in time but access it at a later point

# Real-life Example


# Software Example


# Use Case
    object must be created in multiple steps, and different representations of the same 
    construction are required.