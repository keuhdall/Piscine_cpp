#ifndef A_CLASS_HPP
# define A_CLASS_HPP

#include "Base.class.hpp"

class A : public Base {
    public:
        A();
        A(A const & src);
        virtual ~A();
        A & operator=(A const & rhs);
};

#endif