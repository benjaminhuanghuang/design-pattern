
#ifndef CRTP2_H
#define CRTP2_H

template<typename D>
class Base2 {
public:
    D& derived() {
        return static_cast<D&>(*this);
    }

    int return_data() { return derived().get_value(); }

};

class Derived2 : public Base2<Derived2> {
public:
    int get_value() const { return 100; }
};

#endif //CRTP2_H
