# Chapter 2. Keeping your Objects in the Know: The Observer Pattern

A pattern that keeps your objects in the know when something they care about happens

Publishers + Subscribers = Observer Pattern

The Observer Pattern defines a one-to-many relationship between a set of objects.

```java
public interface Subject {
    public void registerObserver(Observer o);
    public void removeObserver(Observer o);
    public void notifyObservers();
}

public interface Observer {
    public void update(float temp, float humidity, float pressure);
}
`


```
