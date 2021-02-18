#include <iostream>
#include "smart2.h"

class Resource {
public:
    Resource() {
        std::cout << "Creating Resource" << std::endl;
    }

    ~Resource() {
        std::cout << "Destroying Resource" << std::endl;
    }

    void do_something() {
        std::cout << "Doing something" << std::endl;
    }
};

int main() {
    Ptr2<Resource> pr;

    pr->do_something();

    return 0;
}
