#ifndef B_CLASS_HPP
# define B_CLASS_HPP

#include "Base.class.hpp"

class B : public Base {
    public:
        B();
        B(B const & src);
        virtual ~B();
        B & operator=(B const & rhs);
};

#endif