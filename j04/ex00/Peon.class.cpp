#include "Peon.class.hpp"

Peon::Peon() : Victim() {
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << _name << " : Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) {
    *this = src;
    std::cout << _name << " : Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << _name << " : Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
    }
    return *this;
}

void Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}