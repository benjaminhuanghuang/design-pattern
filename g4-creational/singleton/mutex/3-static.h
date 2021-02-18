#ifndef MEYERS_H
#define MEYERS_H

#include <iostream>

class MeyersSingleton
{
    MeyersSingleton() {}  // Prevent construction and copying
    MeyersSingleton(const MeyersSingleton&);
    MeyersSingleton& operator=(const MeyersSingleton&);

public:
    // init at first call
    static MeyersSingleton& instance() {
        static MeyersSingleton _instance;
        return _instance;
    }

    void do_it() const {
        std::cout << "Doing it" << std::endl;
    }
};

#endif //MEYERS_H
