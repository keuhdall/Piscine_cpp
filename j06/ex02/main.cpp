#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

#include <iostream>

Base *generate() {
    int i = rand() % 3;
    if (i == 0) {
        return new A();
    } else if (i == 1) {
        return new B();
    } else {
        return new C();
    }
}

void identify_from_pointer(Base * p) {
    try {
        A *a = dynamic_cast<A *>(p);
        if (a)
            std::cout << "A" << std::endl;
    } catch (...) {
        try {
            B *b = dynamic_cast<B *>(p);
            if (b)
                std::cout << "B" << std::endl;
        } catch (...) {
            std::cout << "C" << std::endl;
        }
    }
}

void identify_from_reference(Base & p) {
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    } catch (...) {
        try {
            B b =dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        } catch (...) {
            std::cout << "C" << std::endl;
        }
    }
}

int main() {
    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    return 0;
}