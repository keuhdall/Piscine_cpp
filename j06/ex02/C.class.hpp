#ifndef C_CLASS_HPP
# define C_CLASS_HPP

#include "Base.class.hpp"

class C : public Base {
    public:
        C();
        C(C const & src);
        virtual ~C();
        C & operator=(C const & rhs);
};

#endif