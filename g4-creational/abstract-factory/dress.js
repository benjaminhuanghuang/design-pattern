/*
An Abstract Factory creates objects that are related by a common theme.
*/
class DressClothesFactory {
  constructor() {}

  getShoes() {
    return new DressShoes();
  }

  getShirt() {
    return new DressShirt();
  }
}

class CasualClothesFactory {
  constructor() {}

  getShoes() {
    return new CasualShoes();
  }

  getShirt() {
    return new CasualShirt();
  }
}

class DressShoes {
  constructor() {}
  // ...Shoe stuff here
}

class CasualShoes {
  constructor() {}

  // ...Shoe stuff here
}

class DressShirt {
  constructor() {}

  // ...Shirt stuff here
}

class CasualShirt {
  constructor() {}
  // ...Shirt stuff here
}

const dressClothesFactory = new DressClothesFactory();
const dressShoes = dressClothesFactory.getShoes();

const casualClothesFactory = new CasualClothesFactory();
const casualShirt = casualClothesFactory.getShirt();
