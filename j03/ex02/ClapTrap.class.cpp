#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(): _name("Jlaz"), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new ClapTrap named " << _name << " was born !" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(100),
    _maxHp(100), _energy(100), _maxEnergy(100),
    _level(1), _meleeDmg(30), _rangedDmg(20), _armor(5) {
    std::cout << "A new ClapTrap named " << _name << " was born !" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " exploded" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs) {
    if (this != &rhs)
        _hp = rhs.getHp();
        _energy = rhs.getEnergy();
        _name = rhs.getName();
    return *this;
}

void ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "ClapTrap " << _name << " attacks " << target << " at range, causing " << _rangedDmg << "points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "ClapTrap " << _name << " attacks " << target << " in melee, causing " << _meleeDmg << "points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hp -= (amount - _armor);
    _hp = _hp < 0 ? 0 : _hp;
    std::cout << "ClapTrap took some damages, its HPs are now at " << _hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    _hp += amount;
    _hp = _hp > _maxHp ? _maxHp : _hp;
    std::cout << "ClapTrap repaired itself, its HPs are now at " << _hp << std::endl;
}

void ClapTrap::vaulthunter_dot_exe(std::string const & target) {
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
    std::cout << "ClapTrap performed a " << attacks[rand() % 5] << " attack on " << target << std::endl;
}

int ClapTrap::getHp() const {
    return _hp;
}

int ClapTrap::getEnergy() const {
    return _energy;
}

std::string ClapTrap::getName() const {
    return _name;
}