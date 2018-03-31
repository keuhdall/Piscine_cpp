#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

#include "AWeapon.class.hpp"

#include <iostream>

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const & src);
        virtual ~PlasmaRifle();
        PlasmaRifle & operator=(PlasmaRifle const & rhs);
        void attack() const;
};

#endif