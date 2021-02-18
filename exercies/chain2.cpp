#include <iostream>

//-------------------------------------------------------------------------
// Example of Chain of Responsibility where a request is completely handled
// by one handler, in which case the chain goes no further
//-------------------------------------------------------------------------

class Request {
    int type;
public:
    Request(int t) : type{t} {}
    int get_type() { return type; }
};

class Handler {
    Handler *next;
public:
    Handler(Handler *h = 0) : next{h} {}

    virtual void Handle(Request *r) {
        if (next != 0)
            next->Handle(r);
        else
            std::cout << "Unhandled request, type " << r->get_type() << std::endl;
    }
};

class Type1Handler : public Handler {
public:
    Type1Handler(Handler *h) : Handler(h) {}

    void Handle(Request *r) {
        if (r->get_type() == 1)
            std::cout << "Handled type 1 request" << std::endl;
        else {
            std::cout << "Type1: can't handle" << std::endl;
            Handler::Handle(r);
        }
    }
};

class Type2Handler : public Handler {
public:
    Type2Handler(Handler *h) : Handler(h) {}

    void Handle(Request *r) {
        if (r->get_type() == 2)
            std::cout << "Handled type 2 request" << std::endl;
        else {
            std::cout << "Type2: can't handle" << std::endl;
            Handler::Handle(r);
        }
    }
};

class Type3Handler : public Handler {
public:
    Type3Handler(Handler *h) : Handler(h) {}

    void Handle(Request *r) {
        if (r->get_type() == 3)
            std::cout << "Handled type 3 request" << std::endl;
        else {
            std::cout << "Type3: can't handle" << std::endl;
            Handler::Handle(r);
        }
    }
};

int main() {

    Type3Handler h3(0);
    Type2Handler h2(&h3);
    Type1Handler h1(&h2);

    Request r(2);

    h1.Handle(&r);

    Request r2(4);

    h1.Handle(&r2);

    return 0;
}