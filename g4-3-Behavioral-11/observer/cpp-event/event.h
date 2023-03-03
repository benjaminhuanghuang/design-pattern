#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event {
public:
    virtual ~Event() = default;
};

class EventOne : public Event {
public:
    virtual ~EventOne() = default;

    int payload() {
        return 42;
    }
};

class EventTwo : public Event {
public:
    virtual ~EventTwo() = default;

    std::string payload() {
        return "The answer";
    }
};
#endif //EVENT_H