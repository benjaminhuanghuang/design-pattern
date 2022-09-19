


```
  type Bike stuct{
    color string            // private
    Name  string            // pbulic 
  }

  func (b *Bike) Move() string {
      return "Move..."
  }
```

## Go oop
- Encapsulation         : 大小写
- inheritance           : 使用内嵌的方式，对struct 进行组合
- Polymorphism          : interface
```
  type Human interface {
    Speak()
  }

  func(p *Chinse) Speak(){       // implement

  }
```