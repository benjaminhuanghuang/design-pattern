#ifndef OBSERVER_H
#define OBSERVER_H

#include <functional>
#include <typeinfo>       // operator typeid
#include <typeindex>      // std::type_index
#include <unordered_map>  // std::unordered_map
#include <vector>

#include "event.h"

class Observer {
    // Signature of callback methods
    using Callback = std::function<void(const Event&)>;

    // Map of event types to callbacks
    std::unordered_map<std::type_index, std::vector<Callback>> map;

public:
    // Add a subscriber for an event
    void subscribe(std::type_index evt_type, Callback &&callback) {
        map[evt_type].push_back(callback);
    }

    // Notify that an event has occurred
    void notify(const Event &ev) {
        if(map.find(typeid(ev)) == map.end()) return;

        auto callbacks = map[typeid(ev)];
        for(auto callback : callbacks)
            callback(ev);
    }
};
#endif //OBSERVER_H
