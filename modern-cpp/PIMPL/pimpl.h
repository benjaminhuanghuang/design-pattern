#ifndef _PIMPL_H
#define _PIMPL_H

#include <cstdlib>

class Container
{
    Container (const Container& other);             // non-copyable
    Container& operator =(const Container& other);

    class Impl;         // forward declaration of implementation
    Impl* _impl;        // Pointer To Implementation!

public:
    Container (const size_t size);

    int& operator [] (const int index);
    const int& operator [] (const int index) const;
};
#endif //PIMPL_H
