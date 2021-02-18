# CRTP
- Curiously Recurring Template Pattern
- Static polymorphism
- Removes need for virtual functions

```
  class B<T> {

  };

  class D: public B<D> {

  };
```