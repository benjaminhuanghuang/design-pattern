# Design Patterns: State Pattern in TypeScript

Get Rid of Too Many If-Else Branches and Try the State Pattern!

https://levelup.gitconnected.com/design-patterns-state-pattern-in-typescript-32120b9a759f


`State` pattern and `strategy` pattern are very similar in structure, and both belong to behavior patterns, and can also be used to optimize the problem of too many if...else branches. 


```
enum HairDryerMode {
  Off,
  On,
}

class HairDryerV1 {
  mode: HairDryerMode = HairDryerMode.Off;

  constructor(mode: HairDryerMode = HairDryerMode.Off) {
    this.mode = mode;
  }

  switchMode() {
    if (this.mode === HairDryerMode.Off) {
      console.log("Turn on the hair dryer");
      this.mode = HairDryerMode.On;
      console.log("Blowing hot air ~~~");
    } else if (this.mode === HairDryerMode.On) {
      console.log("Turn off the hair dryer");
      this.mode = HairDryerMode.Off;
    }
  }
}


// Test
const hairDryerV1 = new HairDryerV1();
hairDryerV1.switchMode(); // Blowing hot air
hairDryerV1.switchMode(); // Turn off
hairDryerV1.switchMode(); // Blowing hot air
```


In the summer, when the weather is hotter, users will hope that the hair dryer also supports the cold air mode.
In order to meet the above needs, let’s upgrade the hair dryer to HairDryerV2.
```
enum HairDryerMode {
  Off,
  HotAir,
  ColdAir,
}

class HairDryerV2 {
  mode: HairDryerMode = HairDryerMode.Off;

  constructor(mode: HairDryerMode = HairDryerMode.Off) {
    this.mode = mode;
  }

  switchMode() {
    if (this.mode === HairDryerMode.Off) {
      console.log("Start to enter hot air mode");
      this.mode = HairDryerMode.HotAir;
      console.log("Blowing hot air ~~~");
    } else if (this.mode === HairDryerMode.HotAir) {
      console.log("Start to enter cold air mode");
      this.mode = HairDryerMode.ColdAir;
      console.log("Blowing cold air ~~~");
    } else if (this.mode === HairDryerMode.ColdAir) {
      console.log("Turn off the hair dryer");
      this.mode = HairDryerMode.Off;
    }
  }
}

// Test
const hairDryerV2 = new HairDryerV2();
hairDryerV2.switchMode(); // Blowing hot air
hairDryerV2.switchMode(); // Blowing cold air
hairDryerV2.switchMode(); // Turn off
```


Although the second-generation hair dryer has supported cold air and hot air mode, but still can not meet the needs of certain scenarios. 
For example, Strong Cold Air mode and Strong Hot Air mode

After continuous upgrades, the switchMode method in the HairDryer class contains a large number of if...else.
This is not only not conducive to later maintenance, but also if we want to add other modes in the future, we still need to add corresponding conditional branches.


For the above problem, we can use state pattern to encapsulate the different operating modes of the hair dryer into different operating states. 

The state pattern consists of three main roles:
- Context: Holds a reference to the current state and supports updating the current state;
- State: Abstract state class, used to define the public interface of the state in Context;
- ConcreteState: A specific state, which contains the processing logic in this state and controls the switching to other states.


For the previous hair dryer example, I will define a HairDryer class to hold and manage the different states, which corresponds to the Context role in the state pattern. Then use interface to define a HairDryerState interface, and then implement five different hair dryer working states based on this interface.

```
interface HairDryerState {
  doAction(context: HairDryer): void;
}

class TurnOffState implements HairDryerState {
  doAction(context: HairDryer): void {
    console.log("Start to enter strong hot air state");
    context.setState(new StrongHotAirState());
    console.log("Blowing strong hot air ~~~");
  }
}

class StrongHotAirState implements HairDryerState {
  doAction(context: HairDryer): void {
    console.log("Start to enter hot air state");
    context.setState(new HotAirState());
    console.log("Blowing hot air ~~~");
  }
}

class HotAirState implements HairDryerState {
  doAction(context: HairDryer): void {
    console.log("Start to enter strong cold air state");
    context.setState(new StrongColdAirState());
    console.log("Blowing strong cold air ~~~");
  }
}

class StrongColdAirState implements HairDryerState {
  doAction(context: HairDryer): void {
    console.log("Start to enter cold air state");
    context.setState(new ColdAirState());
    console.log("Blowing cold air ~~~");
  }
}


class HairDryer {
  constructor(private state: HairDryerState) {}

  getState(): HairDryerState {
    return this.state;
  }

  setState(state: HairDryerState) {
    this.state = state;
  }

  switchState() {
    this.state.doAction(this);
  }
}

```




## The difference between the strategy pattern and the state pattern:
The strategy pattern is to choose one of the strategies among different strategies to accomplish the same thing. The state pattern focuses more on switching between different states, and each state accomplishes different things.

The algorithms encapsulated in the strategy pattern all accomplish the same thing. For example, in the login scenario, user name/password, email address, mobile phone number, or third-party account login, although users can use different login strategies, the ultimate goal is to complete the login operation, that is to say, between these strategies is replaceable. However, for the state pattern, different states correspond to different behaviors and cannot be replaced at will.

In the strategy pattern, each strategy object does not hold a reference to the Context object, but the Context object contains references to all strategy objects. In the state pattern, each state implements state switching by holding a reference to the Context object.
