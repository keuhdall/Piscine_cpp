#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

#include "AWeapon.class.hpp"

#include <iostream>

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const & src);
        virtual ~PowerFist();
        PowerFist & operator=(PowerFist const & rhs);
        void attack() const;
};

#endif