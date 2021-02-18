import CumulativeSum from './cumulativeSum'

describe('chain of resp: cumulativeSum tests', () => {

  it('correct sum', () => {
    const csum = new CumulativeSum();
    csum.add(10).add(2).add(50).sum
    expect(csum.sum).toEqual(62);
  });
});
