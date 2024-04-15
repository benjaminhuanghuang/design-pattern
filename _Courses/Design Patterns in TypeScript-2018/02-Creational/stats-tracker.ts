export class StatsTracker {
    private static _instance: StatsTracker = new StatsTracker();

    constructor() {
        if(StatsTracker._instance) {
            throw new Error('Cannot instantiate a singleton class using new');
        }
        // Make the static initialization work
        StatsTracker._instance = this;
    }

    public static get instance(): StatsTracker {
        return StatsTracker._instance;
    }
}



const tracker = StatsTracker.instance;
