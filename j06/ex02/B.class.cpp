#include "B.class.hpp"

B::B() : Base() {
}

B::B(B const & src) {
    *this = src;
}

B::~B() {
}

B & B::operator=(B const & rhs) {
    (void)rhs;
    return *this;
}