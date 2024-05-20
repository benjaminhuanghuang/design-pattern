interface Shape {
    draw(): void
    resize(): void;
}

class Circle implements Shape {
    draw() {
        console.log('Circle.draw');
    }

    resize() {
        console.log('Circle.resize');
    }
}

class Rectangle implements Shape {
    draw() {
        console.log('Rectangle.draw');
    }

    resize() {
        console.log('Rectangle.resize');
    }
}

/*
    if we want to add a new operation to the hierarchy, we need to add new function into the interface and 
    modify all of the classes.
*/
