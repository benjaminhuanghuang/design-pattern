class Shape {
  constructor(id, x, y) {
    this.id = id;
    this.setLocation(x, y);
  }

  setLocation(x, y) {
    // prototype function
    this.x = x;
    this.y = y;
  }

  getLocation() {
    return {
      x: this.x,
      y: this.y
    };
  }

  toString() {
    return `Shape("${this.id}")`;
  }
}

class Circle extends Shape {
  constructor(id, x, y, radius) {
    super(id, x, y); // call Shape's constructor via super
    this.radius = radius;
  }
  toString() {
    // override Shape's toString
    return `Circle > ${super.toString()}`; // call `super` instead of `this` to access parent
  }
}

// test the classes
var myCircle = new Circle('mycircleid', 100, 200, 50); // create new instance
console.log(myCircle.toString()); // Circle > Shape("mycircleid")
console.log(myCircle.getLocation()); // { x: 100, y: 200 }