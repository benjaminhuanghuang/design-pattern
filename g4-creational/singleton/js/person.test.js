import Person from './person';

describe('singleton test', () => {
  it('same instance', () => {
    var john = new Person();
    var john2 = new Person();

    expect(john).toEqual(john2);
    expect(john === john2).toBe(true);
  });
});