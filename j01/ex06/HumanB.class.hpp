#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"
#include <string>

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack(void);
    
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif