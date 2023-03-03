// Factory Use Case Example Code
import ChairFactory from './chair-factory'

const CHAIR = ChairFactory.getChair('SmallChair')

console.log(CHAIR.getDimensions())

console.log(ChairFactory.getChair('BigChair').getDimensions())
