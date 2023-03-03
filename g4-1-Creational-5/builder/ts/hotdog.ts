class HotDog {
    constructor(
        public bread: string,
        public ketchup?: boolean,
        public mustard?: boolean
    ) {

    }

    addKetchup() {
        this.ketchup = true;
        return this;
    }


    addMustard() {
        this.mustard = true;
        return this;
    }
}


const myLunch = new HotDog('gluten free');

myLunch.addKetchup().addMustard();