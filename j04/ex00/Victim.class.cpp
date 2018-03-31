#include "Victim.class.hpp"

Victim::Victim() {
    std::cout << "Some random victim called " <<  _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name) {
    Victim();
}

Victim::Victim(Victim const & src) {
    *this = src;
    Victim();
}

Victim::~Victim() {
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim & operator=(Victim const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
    }
    return *this;
}

void Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

void Victim::introduce() const {
    std::cout << "I'm " << _name << " and I like otters !" std::endl;
}

std::string Victim::getName() const {
    return _name;
}