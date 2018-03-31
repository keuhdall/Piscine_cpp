#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

#include "ISpaceMarine.class.hpp"

#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const & src);
        ~TacticalMarine();
        TacticalMarine & operator=(TacticalMarine const & rhs);
        TacticalMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif