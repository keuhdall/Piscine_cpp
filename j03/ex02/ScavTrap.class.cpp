#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    _name = "Jlaz";
    _hp = 100;
    _maxHp = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _meleeDmg = 20;
    _rangedDmg = 15;
    _armor = 3;
    std::cout << "A new ScavTrap named " << _name << " was born !" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    _hp = 100;
    _maxHp = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _meleeDmg = 20;
    _rangedDmg = 15;
    _armor = 3;
    std::cout << "A new ScavTrap named " << _name << " was born !" << std::endl;
} 

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " exploded" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
    if (this != &rhs)
        _hp = rhs._hp;
        _energy = rhs._energy;
        _name = rhs._name;
    return *this;
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