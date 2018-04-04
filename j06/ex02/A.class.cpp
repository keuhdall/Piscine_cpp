#include "A.class.hpp"

A::A() : Base() {
}

A::A(A const & src) {
    *this = src;
}

A::~A() {
}

A & A::operator=(A const & rhs) {
    (void)rhs;
    return *this;
}