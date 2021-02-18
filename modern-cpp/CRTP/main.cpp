

#include <iostream>

#include "crtp2.h"

int main() {
    Base2<Derived2> b2;
    std::cout << b2.return_data() <<std::endl;

    return 0;
}
