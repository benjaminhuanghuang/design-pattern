// See https://aka.ms/new-console-template for more information
using DoctorVisitor;
using System.Numerics;

School school = new School();
var visitor1 = new Doctor("James");
school.PerformOperation(visitor1);

Console.WriteLine();

var visitor2 = new Salesman("John");
school.PerformOperation(visitor2);
Console.Read();
