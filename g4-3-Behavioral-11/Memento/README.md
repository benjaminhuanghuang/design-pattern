# Memento

## Intent
Sometimes called the token pattern. It's all about capturing and externalizing an object's internal state. 

Memento is a way of maintaining state for an object at a point in time.

在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。

优点：  
1、给用户提供了一种可以恢复状态的机制，可以使用户能够比较方便地回到某个历史的状态。 
2、实现了信息的封装，使得用户不需要关心状态的保存细节。

缺点： 消耗资源。如果类的成员变量过多，势必会占用比较大的资源，而且每一次保存都会消耗一定的内存。

## Use cases
When part of the object's state must be saved so it is can be restored later on


## Example
```
private readonly Stack<AddEmployeeToManagerListMemento> _mementos = new ();


if (command.CanExecute())
{
    command.Execute();
    _mementos.Push(command.CreateMemento());
}

public void Undo()
{
    if (_mementos.Any())
    {
        _command?.RestoreMemento(_mementos.Pop());
        _command?.Undo(); 
    }
}

```