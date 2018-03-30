#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(): _name("Jlaz"), _hp(100),
    _maxHp(100), _energy(50), _maxEnergy(50),
    _level(1), _meleeDmg(20), _rangedDmg(15), _armor(3) {
    (void)_maxEnergy;
    (void)_level;
    std::cout << "A new ScavTrap named " << _name << "was born !" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hp(100),
    _maxHp(100), _energy(50), _maxEnergy(50),
    _level(1), _meleeDmg(20), _rangedDmg(15), _armor(3) {
    std::cout << "A new ScavTrap named " << _name << " was born !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " exploded" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
    if (this != &rhs)
        _hp = rhs.getHp();
        _energy = rhs.getEnergy();
        _name = rhs.getName();
    return *this;
}

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "ScavTrap " << _name << " attacks " << target << " at range, causing " << _rangedDmg << "points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "ScavTrap " << _name << " attacks " << target << " in melee, causing " << _meleeDmg << "points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    _hp -= (amount - _armor);
    _hp = _hp < 0 ? 0 : _hp;
    std::cout << "ScavTrap took some damages, its HPs are now at " << _hp << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    _hp += amount;
    _hp = _hp > _maxHp ? _maxHp : _hp;
    std::cout << "ScavTrap repaired itself, its HPs are now at " << _hp << std::endl;
}

void ScavTrap::challengeNewcomer() {
    std::string challs[5] = {
        "Give me a backrub !",
        "Bring me your mom and your dad. Both. Dead.",
        "Give a perfect grade with the 'outstanding' flag to this project !",
        "Listen to Nyancat for 10 hours straight.",
        "Go rob a bank a give me half your gain !"
    };
    std::cout << challs[rand() % 5] << std::endl;
}

int ScavTrap::getHp() const {
    return _hp;
}

int ScavTrap::getEnergy() const {
    return _energy;
}

std::string ScavTrap::getName() const {
    return _name;
}