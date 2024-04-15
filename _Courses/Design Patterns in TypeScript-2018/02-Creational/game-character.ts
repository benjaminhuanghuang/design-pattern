export interface GameCharacter {
    strength: number;
    dexterity: number;
    health: number;
    magic: number;
}

export class GameCharacterFactory{
    public createWarrior(level: number): GameCharacter {
        let warrior: GameCharacter;
        if(level < 10){
            warrior = {strength: 10, dexterity: 5, health: 10, magic: 0};
        }
        else {
            warrior = {strength: 20, dexterity: 10, health: 20, magic: 0};
        }

        return warrior;
    }

    public createMage(): GameCharacter {
        const mage = {strength: 1, dexterity: 2, health: 5, magic: 10};
        return mage;
    }
}
