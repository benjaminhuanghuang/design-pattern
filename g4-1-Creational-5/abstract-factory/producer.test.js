import droidProducer from './producer';

describe('abstract factory test', () => {
  it('Battle droid', () => {
    const battleDroid = droidProducer('battle')();
    expect(battleDroid.info()).toEqual('B1, Battle Droid');
  });

  it('pilot droid 6', () => {
    const pilotDroid = droidProducer('pilot')();
    expect(pilotDroid.info()).toEqual('Rx24, Pilot Droid');
  });

});