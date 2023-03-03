
# Description
        In the Factory Method, we execute a single function, passing a parameter 
    that provides information about what we want. We are not required to know 
    any details about how the object is implemented and where it is coming from.


# Comparison
        Factory Method, which is a method or function that returns a different 
    object per input parameter
        Abstract Factory, which is a group of Factory Methods used to create a 
    family of related products


# Real-life Example
        An example of the Factory Method pattern used in reality is in plastic toy
    construction. The molding powder used to construct plastic toys is the same,
    but different figures can be produced using different plastic molds. 
        This is like having a Factory Method in which the input is the name of the 
    figure that we want (duck and car) and the output is the plastic figure that we requested.


# Software Example
        The Django framework uses the Factory Method pattern for creating the fields
    of a form. The forms module of Django supports the creation of different kinds
    of fields (CharField, EmailField) and customizations (max_length, required)