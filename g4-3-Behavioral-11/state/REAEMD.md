# State




## Intent
Its intent is to allow an object to alter its behavior when its internal state changes

Get Rid of Too Many If-Else Branches!

## Main roles
The state pattern consists of three main roles:
- Context: Holds a reference to the current state and supports updating the current state;
- State: Abstract state class, used to define the public interface of the state in Context;
- ConcreteState: A specific state, which contains the processing logic in this state and controls the switching to other states.


## Example
State machine
