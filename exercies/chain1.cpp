#include <iostream>
#include <string>

//-------------------------------------------------------
// Sample implementation of Chain of Responsibility
//
// This models a machine that can dispense any amount
// of currency using combinations of 20, 10, 5 and 1
// denomination notes
//-------------------------------------------------------

int dispense_20(int amount) {
    int n = amount / 20;
    std::cout << "20: " << n << std::endl;

    return amount%20;
}

int dispense_10(int amount) {
    int n = amount / 10;
    std::cout << "10: " << n << std::endl;

    return amount%10;
}

int dispense_5(int amount) {
    int n = amount / 5;
    std::cout << "5: " << n << std::endl;

    return amount%5;
}

// This is the terminator
int dispense_1(int amount) {
    std::cout << "1: " << amount << std::endl;

    return 0;
}

class ChainElement {
    ChainElement *next;
    typedef int (*Func)(int n);
    Func fp;
public:
    ChainElement(Func f, ChainElement *nx = nullptr) : fp{f}, next{nx} {}
    ~ChainElement() { }

    void set_next(ChainElement *nx) {
        next = nx;
    }

    void process(int n) {
        int result = fp(n);
        if (next && result > 0) {
            next->process(result);
        }
    }
};

int main() {
    std::cout << "Processing..." << std::endl;

    // Call the functions manually
    int v1 = dispense_20(71);
    int v2 = dispense_10(v1);
    int v3 = dispense_5(v2);
    int v4 = dispense_1(v3);

    // Build chain manually and process
    ChainElement head(dispense_20);
    ChainElement ce2(dispense_10);
    head.set_next(&ce2);
    ChainElement ce3(dispense_5);
    ce2.set_next(&ce3);
    ChainElement ce4(dispense_1);
    ce3.set_next(&ce4);

    head.process(72);

    head.process(60);

    return 0;
}
