#include <iostream>
#include <string>

// Demo of State pattern

// Role base and implementations
class Role {
public:
    virtual double bonus() const = 0;
    virtual double basePay() const = 0;
};

class Engineer : public Role {
public:
    double bonus() const { return 0.0; }
    double basePay() const { return 100.0; }
};

class Manager : public Role {
public:
    double bonus() const { return 100.00; }
    double basePay() const { return 1000.0; }
};

// Singletons for Roles
static Engineer eng;
static Manager mgr;

// Our Employee class
class Employee {
    std::string name;
    const Role* pRole;
public:
    Employee(const std::string& n, const Role* r) : name(n), pRole(r) {}
    std::string getName() { return name; }

    void promoteToManager() {
        pRole = &mgr;
    }
    double totalPay() const { return pRole->basePay() + pRole->bonus(); }
};

int main() {
    // fred is an Engineer
    Employee e1("fred", &eng);
    std::cout << e1.getName() << " gets " << e1.totalPay() << std::endl;

    // fred gets promoted
    e1.promoteToManager();
    std::cout << e1.getName() << " now gets " << e1.totalPay() << std::endl;

    return 0;
}
