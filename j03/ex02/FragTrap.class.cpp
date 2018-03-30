#include "FragTrap.class.hpp"

FragTrap::FragTrap(): _name("Jlaz"), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new FragTrap named " << _name << "was born !" << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new FragTrap named " << _name << " was born !" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " exploded" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {
    if (this != &rhs)
        _hp = rhs.getHp();
        _energy = rhs.getEnergy();
        _name = rhs.getName();
    return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (_energy < 25) {
        std::cout << "I'm out of energy !" << std::endl;
        return;
    }
    std::string attacks[5] = {
        "bazooka",
        "knife",
        "nuclear weapon",
        "shovel",
        "fart"
    };
    _energy -= 25;
    std::cout << "FR4G-TP performed a " << attacks[rand() % 5] << " attack on " << target << std::endl;
}