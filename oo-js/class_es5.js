function Shape(id, x, y) {
  this.id = id;
  this.setLocation(x, y);
}

Shape.prototype.setLocation = function(x, y) {
  this.x = x;
  this.y = y;
};

Shape.prototype.getLocation = function() {
  return {
    x: this.x,
    y: this.y
  };
};

Shape.prototype.toString = function() {
  return 'Shape("' + this.id + '")';
};


function Circle(id, x, y, radius) {
  Shape.call(this, id, x, y);
  this.radius = radius;
}
// extends3
Circle.prototype = Object.create(Shape.prototype);
Circle.prototype.constructor = Circle;

Circle.prototype.toString = function() {
  return 'Circle > ' + Shape.prototype.toString.call(this);
};

// test the classes
var myCircle = new Circle('mycircleid', 100, 200, 50); // create new instance
console.log(myCircle.toString()); // Circle > Shape("mycircleid")
console.log(myCircle.getLocation()); // { x: 100, y: 200 }