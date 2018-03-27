#include "HumanB.class.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() {
    std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
}