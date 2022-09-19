
import Sheep from './sheep';

describe('prototype: Sheep test', () => {
  it('sanity', () => {
    var sheep = new Sheep('dolly', 10.3);
    var dolly = sheep.clone();
    expect(dolly.name).toEqual('dolly');
    expect(dolly.weight).toEqual(10.3);
    expect(dolly).toBeInstanceOf(Sheep);
    expect(dolly === sheep).toBe(false);
  });
});