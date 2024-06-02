# Observer Pattern

This pattern defines a one-to-many dependency between objects so that
when one object changes state, all of its dependents are notified and `updated automatically`.

Subject and Observers are loosely coupled. They don't know much about each other.

```java
public interface Subject {
    public void registerObserver(Observer o);
    public void removeObserver(Observer o);
    public void notifyObservers();
}

public interface Observer {
    public void update(int value);
}
```
