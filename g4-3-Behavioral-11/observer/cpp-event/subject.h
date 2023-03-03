


#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <typeinfo>       // operator typeid

#include "event.h"

class Subject {
    std::string id;
public:
    Subject(const std::string& the_id) : id{the_id} {}

    void handle(const Event& ev) {
        // Better to check using types rather than string comparisons
        if (typeid(ev) == typeid(EventOne)) {
            auto event = dynamic_cast<const EventOne &>(ev);
            std::cout << id <<": EventOne payload is " << event.payload() << std::endl;
        }
        else if (typeid(ev) == typeid(EventTwo)) {
            auto event = dynamic_cast<const EventTwo &>(ev);
            std::cout << id <<": EventTwo payload is " << event.payload() << std::endl;
        }
        else {
            std::cerr << "Unexpected event type" << std::endl;
        }
    }
};
#endif //SUBJECT_H

