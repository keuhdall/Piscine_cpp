#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

#include "ISpaceMarine.class.hpp"

#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const & src);
        ~AssaultTerminator();
        AssaultTerminator & operator=(AssaultTerminator const & rhs);
        AssaultTerminator* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif