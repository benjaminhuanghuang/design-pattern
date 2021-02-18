#ifndef SMART2_H
#define SMART2_H

template <typename T>
class Ptr2 {
    T* _ptr;

    // Prevent copying
    Ptr2(const Ptr2&);
    Ptr2& operator=(const Ptr2&);
public:
    explicit Ptr2(T* p = 0) : _ptr(p) {}
    ~Ptr2() { delete _ptr; }

    T* operator->() {
        if (!_ptr)
            _ptr = new T();
        return _ptr;
    }

    T& operator*() {
        if (!_ptr)
            _ptr = new T();
        return *_ptr;
    }
};
#endif //SMART2_H
