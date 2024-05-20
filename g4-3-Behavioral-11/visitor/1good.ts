interface Shape {
   accept(visitor: Visitor): void;
}

class Circle implements Shape {
    public accept(visitor: Visitor) {
        visitor.visit(this);
    }
}
class Rectangle implements Shape {
    public accept(visitor: Visitor) {
        visitor.visit(this);
    }

}
interface Visitor { 
    visit(circle: Circle): void;
    visit(rectangle: Rectangle): void;
}

class DrawVisitor implements Visitor {
    visit(circle: Circle) {
        console.log('Circle.draw');
    }
    visit(rectangle: Rectangle) {
        console.log('Rectangle.draw');
    }
}

/*
    If we want to add a new operation, we just need to add a new visitor class.
*/
