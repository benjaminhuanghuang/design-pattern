# Decorator

## Intent
Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.
Client-specified embellishment of a core object by recursively wrapping it.
Wrapping a gift, putting it in a box, and wrapping the box.

## Problem
You want to add behavior or state to individual objects at run-time. Inheritance is not feasible because it is static and applies to an entire class.

各种需求会排列组合，如果使用继承会出现大量重复

Decorator pattern 通过组合，动态地/运行时给一个对象增加功能
相比inherit，减少重复代码和子类



