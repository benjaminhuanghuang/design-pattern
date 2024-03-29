﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DiscountVisitor
{
    public class DiscountVisitor : IVisitor
    {
        public decimal TotalDiscountGiven { get; set; }

        public void Visit(IElement element)
        {
            if (element is Customer)
            {
                VisitCustomer((Customer)element);
            }
            else if (element is Employee)
            {
                VisitEmployee((Employee)element);
            }
        }

        private void VisitCustomer(Customer customer)
        {
            // percentage of total amount
            var discount = customer.AmountOrdered / 10;
            // set it on the customer
            customer.Discount = discount;
            // add it to the total amount
            TotalDiscountGiven += discount;
        }

        private void VisitEmployee(Employee employee)
        {
            // fixed value depending on the amount of years employed
            var discount = employee.YearsEmployed < 10 ? 100 : 200;
            // set it on the employee
            employee.Discount = discount;
            // add it to the total amount
            TotalDiscountGiven += discount;
        }
    }
}
