﻿namespace CarBuilder
{
    /// <summary>
    /// Builder abstract class
    /// </summary>
    public abstract class CarBuilder
    {
        public Car Car { get; private set; }

        public CarBuilder(string carType)
        {
            Car = new Car(carType);
        }
        public abstract void BuildEngine();
        public abstract void BuildFrame();
    }

    /// <summary>
    /// ConcreteBuilder1 class
    /// </summary>
    public class MiniBuilder : CarBuilder
    {
        public MiniBuilder()
            : base("Mini")
        {
        }

        public override void BuildEngine()
        {
            Car.AddPart("'not a V8'");
        }

        public override void BuildFrame()
        {
            Car.AddPart("'3-door with stripes'");
        }
    }

    /// <summary>
    /// ConcreteBuilder2 class
    /// </summary>
    public class BMWBuilder : CarBuilder
    {
        // Invoke base class constructor
        public BMWBuilder()
            : base("BMW")
        {
        }

        public override void BuildEngine()
        {
            Car.AddPart("'a fancy V8 engine'");
        }

        public override void BuildFrame()
        {
            Car.AddPart("'5-door with metallic finish'");
        }
    }

}