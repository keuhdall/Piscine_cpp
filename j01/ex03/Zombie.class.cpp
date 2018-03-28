#include "Zombie.class.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
}

Zombie::~Zombie() {
}

void Zombie::announce() {
    std::cout << "<" << _name << " (" << _type << ")> : Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getName() {
    return _name;
}

std::string Zombie::getType() {
    return _type;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::setType(std::string type) {
    this->_type = type;
}