class Shape2DInterface:
  def draw(self):
    pass

class Shape3DInterface:
  def draw(self):
    pass

class Circle(Shape2DInterface):
  def draw(self):
    print "Circle"


class Square(Shape2DInterface):
  def draw(self):
    print "Square"

class Sphere(Shape3DInterface):
  def draw(self):
    print "Sphere"

class Cube(Shape3DInterface):
  def draw(self):
    print "Cube"

# 
class ShapeFactoryInterface:
  def getShape(sides):
    pass

class Shape2DFactory(ShapeFactoryInterface)
  @staticmethod
  def getShape(sides):
    if sides == 1:
      return Circle()
    if sides == 4:
      return Square()
    
class Shape3DFactory(ShapeFactoryInterface)
  @staticmethod
  def getShape(sides):
    if sides == 1:
      return Sphere()
    if sides == 6:
      return Cube()
