#include "Base.class.hpp"

Base::Base() {
}

Base::Base(Base const & src) {
    *this = src;
}

Base::~Base() {
}

Base & Base::operator=(Base const & rhs) {
    (void)rhs;
    return *this;
}