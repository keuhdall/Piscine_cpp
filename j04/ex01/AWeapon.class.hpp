#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

#include <string>

class AWeapon
{
    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        std::string const & getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

    protected:
        std::string _name;
        int _apcost;
        int _damage;
};

#endif