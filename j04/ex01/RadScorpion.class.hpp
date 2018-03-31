#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

#include "Enemy.class.hpp"

#include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const & src);
        virtual ~RadScorpion();
        RadScorpion & operator=(RadScorpion const & rhs);
        void takeDamage(int);
};

#endif