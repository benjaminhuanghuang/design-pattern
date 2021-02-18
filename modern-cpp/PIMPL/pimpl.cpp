#include "pimpl.h"

#include <vector>

// Inner implementation class
class Container::Impl
{
public:
    Impl (const size_t size) {
        vec.resize (size);
    }

    std::vector<int> vec;
};

// Implementation of outer class
Container::Container (const size_t size) : _impl (new Impl (size)) { }

int& Container::operator [] (const int index)
{
    return _impl->vec [index];
}

const int& Container::operator [] (const int index) const
{
    return _impl->vec [index];
}

