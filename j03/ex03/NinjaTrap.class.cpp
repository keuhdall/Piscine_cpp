#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
    _name = "Jlaz";
    _hp = 60;
    _maxHp = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _meleeDmg = 60;
    _rangedDmg = 5;
    _armor = 0;
    (void)_maxEnergy;
    (void)_level;
    std::cout << "A new NinjaTrap named " << _name << " was born !" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    _hp = 60;
    _maxHp = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _meleeDmg = 60;
    _rangedDmg = 5;
    _armor = 0;
    std::cout << "A new FragTrap named " << _name << " was born !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
    *this = src;
}

NinjaTrap::~NinjaTrap() {
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	std::cout << "NinjaTrap " << _name << " says hello to his fellow ninja " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & target) {
	std::cout << "NinjaTrap " << _name << " says hello to his fellow fragtrap " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
	std::cout << "NinjaTrap " << _name << " says hello to his fellow scavtrap " << target.getName() << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
    if (this != &rhs)
        _hp = rhs.getHp();
        _energy = rhs.getEnergy();
        _name = rhs.getName();
    return *this;
}