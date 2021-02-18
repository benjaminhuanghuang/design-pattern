#include <iostream>
using namespace std::placeholders;

#include "subject.h"
#include "observer.h"
#include "event.h"

int main() {
    Subject subject1("One"), subject2("Two");
    Observer observer;

    observer.subscribe(typeid(EventOne),
                       std::bind(&Subject::handle, subject1, _1));
    observer.subscribe(typeid(EventOne),
                       std::bind(&Subject::handle, subject2, _1));
    observer.subscribe(typeid(EventTwo),
                       std::bind(&Subject::handle, subject2, _1));

    observer.notify(EventOne());
    observer.notify(EventTwo());

    return 0;
}
