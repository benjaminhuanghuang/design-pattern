#ifndef NAIVE_H
#define NAIVE_H

//NaiveSingleton *inst = NaiveSingleton::instance();
//inst->do_it();

#include <iostream>

class NaiveSingleton{
    static NaiveSingleton *_instance;

    NaiveSingleton() {};  // private default constructor
    NaiveSingleton(const NaiveSingleton&);  // prevent copying
    NaiveSingleton& operator=(const NaiveSingleton&);

public:
    static NaiveSingleton* instance() {
        if (!_instance) {
            _instance = new NaiveSingleton();
        }
        return _instance;
    }

    void do_it() const {
        std::cout << "Doing it" << std::endl;
    }
};

NaiveSingleton *NaiveSingleton::_instance = nullptr;

#endif //NAIVE_H
