#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    *this = src;
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
        _title = rhs.getTitle();
    }
    return *this;
}

void Sorcerer::polymorph(Victim const & target) const {
    target.getPolymorphed();
}

std::string Sorcerer::getName(void) const {
    return _name;
}

std::string Sorcerer::getTitle(void) const {
    return _title;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}