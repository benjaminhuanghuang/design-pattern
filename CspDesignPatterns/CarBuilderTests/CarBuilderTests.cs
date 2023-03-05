using CarBuilder;

namespace CarBuilderTests
{
    public class CarBuilderTests
    {
        [Fact]
        public void ShouldBuildMinn()
        {

            var garage = new Garage();

            var miniBuilder = new MiniBuilder();
          
            // Inject build and contruct car
            garage.Construct(miniBuilder);

            Assert.Contains("'not a V8'", miniBuilder.Car.ToString());
        }
    }
}