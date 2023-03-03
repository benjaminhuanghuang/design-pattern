class PlumbingSystem {
    setPressure(v: number){

    }

    turnOn(){

    }

    turnOff(){

    }
}


class ElectricalSystem{

    setVoltage(v: number){

    }

    turnOn(){

    }

    turnOff(){

    }
}

class House {
    private plumbing = new PlumbingSystem();
    private electrical = new ElectricalSystem();

    public turnOnSystem(){
        this.electrical.setVoltage(120);
        this.electrical.turnOn();
        this.plumbing.setPressure(500);
        this.plumbing.turnOn();
    }

    public shutDown(){
        this.electrical.turnOff();
        this.plumbing.turnOff();
    }
}

//
const client = new House();
client.turnOnSystem();
client.shutDown();