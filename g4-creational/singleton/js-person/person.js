class Person {
  constructor() {
    if (typeof Person.instance === 'object') {
      return Person.instance;
    }
    Person.instance = this;
    // return this;    // I think constructor returns 'this' by default
  }
}

export default Person;