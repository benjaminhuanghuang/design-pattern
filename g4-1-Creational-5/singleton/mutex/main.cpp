#include "meyers.h"

int main() {
    MeyersSingleton& inst = MeyersSingleton::instance();
    inst.do_it();

    return 0;
}
