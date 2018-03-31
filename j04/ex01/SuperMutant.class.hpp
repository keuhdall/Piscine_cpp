#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

#include "Enemy.class.hpp"

#include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const & src);
        virtual ~SuperMutant();
        SuperMutant & operator=(SuperMutant const & rhs);
        void takeDamage(int);
};

#endif