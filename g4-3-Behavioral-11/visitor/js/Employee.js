function Employee(name, salary) {
    this.name = name;
    this.salary = salary;
}

Employee.prototype = {
    getSalary: function() {
        return this.salary;
    },

    setSalary: function(salary) {
        this.salary = salary;
    },

    accept: function(visitorFunction) {
        visitorFunction(this);
    }
}


const devsage = new Employee('DevSage', 10000);
console.log(devsage.getSalary());

function ExtraSalary(employee) {
    employee.setSalary(employee.getSalary() * 2);
}

// Change the data in Employee object using visitor pattern
devsage.accept(ExtraSalary);
console.log(devsage.getSalary());
