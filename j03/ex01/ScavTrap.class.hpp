#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include <string>

class ScavTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const & rhs);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(void);
        int getHp(void) const;
        int getEnergy(void) const;
        std::string getName(void) const;

    private:
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