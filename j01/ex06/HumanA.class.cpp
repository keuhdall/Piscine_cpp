#include "HumanA.class.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << _name << " attacks with his " << this->_weapon.getType() << std::endl;
}