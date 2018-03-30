#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>
#include <string>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & rhs);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
        int getHp(void) const;
        int getEnergy(void) const;
        std::string getName(void) const;

    protected:
        std::string _name;
        int _hp;
        int _maxHp;
        int _energy;
        int _maxEnergy;
        int _level;
        int _meleeDmg;
        int _rangedDmg;
        int _armor;
};

#endif