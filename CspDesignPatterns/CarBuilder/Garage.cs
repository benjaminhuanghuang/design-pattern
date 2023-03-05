using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarBuilder
{
    /// <summary>
    /// Director need a builder to construct the car
    /// </summary>
    public class Garage
    {
        private CarBuilder? _builder;

        public Garage()
        {
        }

        /*
         * Inject and use the builder
         */
        public void Construct(CarBuilder builder)
        {
            _builder = builder;

            _builder.BuildEngine();
            _builder.BuildFrame();
        }

        // variation: the show method on the director instead of on the product.
        public void Show()
        {
            Console.WriteLine(_builder?.Car.ToString());
        }
    }
}
