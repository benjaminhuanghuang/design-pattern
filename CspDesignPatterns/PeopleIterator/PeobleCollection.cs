using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleIterator
{
    /// <summary>
    /// Aggregate
    /// </summary>
    public interface IPeopleCollection
    {
        IPeopleIterator CreateIterator();
    }

    /// <summary>
    /// ConcreteAggregate
    /// </summary>
    public class PeopleCollection : List<Person>, IPeopleCollection
    {
        public IPeopleIterator CreateIterator()
        {
            return new PeopleIterator(this);
        }
    }
}
