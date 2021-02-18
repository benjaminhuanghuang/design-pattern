const bmwFactory = require('./bmwFactory_es5');

describe('factory test', () => {
  it('sanity', () => {
    var x5 = bmwFactory('X5');
    var x6 = bmwFactory('X6');

    expect(x5.price).toEqual(108000);
    expect(x6.price).toEqual(111000);
    expect(x5.maxSpeed).toEqual(300);
    expect(x6.maxSpeed).toEqual(320);
  });
});