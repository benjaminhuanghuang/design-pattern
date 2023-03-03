Visitor (IVisitor): This is an interface and it declares the Visit operation for each element in the object structure (i.e. for concrete visitors).

ConcreteVisitor (Doctor, Salesman): These are the subclasses that implement each operation declared by the IVisitor interface. Each operation implements a fragment of the algorithm defined for the corresponding class or object in the structure.

Element (IElement): This is an interface that defines an Accept operation that takes a visitor as an argument.

ConcreteElement (Kid): This is a class that implements the Element (i.e. IElement) interface i.e. this class implements the Accept operation that takes a visitor as an argument.

ObjectStructure (School): This is a class that holds all the elements (i.e. a collection of kids) and provides a high-level interface that allows the visitor to visit all the elements.

