#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() {
    ClapTrap();
    std::cout << "A new ScavTrap named " << _name << "was born !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    ClapTrap(name);
    std::cout << "A new ScavTrap named " << _name << " was born !" << std::endl;
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