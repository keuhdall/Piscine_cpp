#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

#include "ISquad.class.hpp"

#include <stdlib.h>

class Squad : public ISquad
{
    public:
        Squad();
        Squad(Squad const & src);
        virtual ~Squad();
        Squad & operator=(Squad const & rhs);
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
    
    private:
        ISpaceMarine **_squad;
        int _count;
};

#endif