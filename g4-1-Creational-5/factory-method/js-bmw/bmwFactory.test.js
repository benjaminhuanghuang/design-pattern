import BmwFactory from './bmwFactory';

describe('Factory es6 test', () => {
  it('We can create a X5 instance', () => {
    const x5 = BmwFactory.create('X5');
    expect(x5.model).toEqual('X5');
  });

  it('The X5 price is properly set', () => {
    const x5 = BmwFactory.create('X5');
    expect(x5.price).toEqual(108000);
  });
});