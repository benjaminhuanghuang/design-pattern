# Chapter 6. Encapsulating Invocation: The Command Pattern

encapsulated method invocations, like save them away for logging or reuse them to implement undo functionality in our code

```java
public interface Command {
    public void execute();
}


remote.setCommand(lightOn);
remote.buttonWasPressed();
remote.setCommand(garageOpen);
remote.buttonWasPressed();
```

## Using state to implement Undo

To undo, we set the state back to the previous state and then call the execute method.
