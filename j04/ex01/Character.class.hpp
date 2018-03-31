#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"

class Character
{
    public:
        Character();
        Character(std::string const & name);
        Character(Character const & src);
        virtual ~Character();
        Character & operator=(Character const & rhs);
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string getName() const;
        int getAP(void) const;
        AWeapon *getWeapon(void) const;
    
    private:
        std::string _name;
        int _ap;
        AWeapon *_w;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif