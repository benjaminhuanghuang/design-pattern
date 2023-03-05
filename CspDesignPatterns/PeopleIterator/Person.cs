using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleIterator
{
    public class Person
    {
        public string Name { get; set; }
        public string Country { get; set; }

        public Person(string name, string country)
        {
            Name = name;
            Country = country;
        }
    }

}
