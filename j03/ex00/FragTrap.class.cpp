#include "FragTrap.class.hpp"

FragTrap::FragTrap(): _name("Jlaz"), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new FragTrap named " << _name << " was born !" << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new FragTrap named " << _name << " was born !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " exploded" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {
    if (this != &rhs)
        _hp = rhs.getHp();
        _maxHp = rhs.getMaxHp();
        _energy = rhs.getEnergy();
        _name = rhs.getName();
    return *this;
}

void FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedDmg << "points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << _name << " attacks " << target << " in melee, causing " << _meleeDmg << "points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    _hp -= (amount - _armor);
    _hp = _hp < 0 ? 0 : _hp;
    std::cout << "FR4G-TP " << _name << " took some damages, its HPs are now at " << _hp << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    _hp += amount;
    _hp = _hp > _maxHp ? _maxHp : _hp;
    std::cout << "FR4G-TP repaired itself, its HPs are now at " << _hp << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (_energy < _maxEnergy - _maxEnergy + 25) {
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

int FragTrap::getHp() const {
    return _hp;
}

int FragTrap::getMaxHp() const {
    return _maxHp;
}

int FragTrap::getEnergy() const {
    return _energy;
}

int FragTrap::getLevel() const {
    return _level;
}

std::string FragTrap::getName() const {
    return _name;
}