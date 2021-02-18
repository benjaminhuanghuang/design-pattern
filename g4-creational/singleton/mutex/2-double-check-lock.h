#ifndef DCL_H
#define DCL_H

//DCLSingleton *inst = DCLSingleton::instance();
//inst->do_it();

#include <mutex>
#include <iostream>

class DCLSingleton{
    static DCLSingleton *_instance;

    DCLSingleton() {};  // private default constructor
    DCLSingleton(const DCLSingleton&);  // prevent copying
    DCLSingleton& operator=(const DCLSingleton&);
    static std::mutex mtx;

public:
    static DCLSingleton* instance() {
        if (!_instance) {       // first check
            mtx.lock();         // acquire lock
            if (!_instance)     // second check
                _instance = new DCLSingleton();
            mtx.unlock();
        }
        return _instance;
    }

    void do_it() const {
        std::cout << "Doing it" << std::endl;
    }
};

std::mutex DCLSingleton::mtx;
DCLSingleton *DCLSingleton::_instance = nullptr;

#endif //DCL_H
