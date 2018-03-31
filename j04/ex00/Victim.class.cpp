#include "Victim.class.hpp"

Victim::Victim() {
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " <<  _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
    *this = src;
    std::cout << "Some random victim called " <<  _name << " just popped !" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
    }
    return *this;
}

void Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const {
    return _name;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}