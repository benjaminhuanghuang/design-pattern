
# Builder Design Pattern

https://dotnettutorials.net/lesson/builder-design-pattern/


## Intent
Separate the construction of a complex object from its representation so that the same construction process can create different representations.
Parse a complex representation, create one of several targets.

## Problem
An application needs to create the elements of a complex aggregate. The specification for the aggregate exists on secondary storage and one of many representations needs to be built in primary storage.



##
分步骤构建一个object。

有点像Template Method。Template Method 关心操作，builder关心创建

## When to use the Builder Design Pattern in real-time applications?
We need to use the Builder Design Pattern in real-time applications in the following scenarios.

When you want to make a complex object by specifying only its type and content. The built object is constructed from the details of its construction.
When you decouple the process of building a complex object from the parts that make up the object.
When you want to isolate the code for construction and representation.

## javascript




