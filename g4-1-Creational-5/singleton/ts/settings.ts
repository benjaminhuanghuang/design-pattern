class Settings {
    static instance: Settings;
    public readonly mode = "dark";


    // prevent new with private constructor
    private constructor() {

    }

    static getInstance(): Settings{
        return this.instance;
    }
}