using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace DoctorVisitor
{
    /*
         ObjectStructure (School): 
         This is a class that holds all the elements (i.e. a collection of kids) and provides a 
         high-level interface that allows the visitor to visit all the elements.
     */
    public class School
    {
        private static List<IElement> elements;
        static School()
        {
            elements = new List<IElement>
            {
                new Kid("Ram"),
                new Kid("Sara"),
                new Kid("Pam")
            };
        }

        public void PerformOperation(IVisitor visitor)
        {
            foreach (var kid in elements)
            {
                kid.Accept(visitor);
            }
        }
    }
}
