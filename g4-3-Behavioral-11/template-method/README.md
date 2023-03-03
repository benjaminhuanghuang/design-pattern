
## Intent
Define the `skeleton of an algorithm` in an operation, deferring some steps to client subclasses. 

Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.
Base class declares algorithm 'placeholders', and derived classes implement the placeholders.

## Problem
Two different components have significant similarities, but demonstrate no reuse of common interface or implementation. If a change common to both components becomes necessary, duplicate effort must be expended.


##
Framework 设定好流程/算法骨架, 提供 virtual method，

子类可以不改变算法结，但是可以改写（override）算法的特定步骤

反向控制流， 由 Framework 来控制流程




