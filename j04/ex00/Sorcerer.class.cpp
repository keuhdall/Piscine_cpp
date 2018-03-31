#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer() {
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    Sorcerer();
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    *this = src;
    Sorcerer();
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
        _title = rhs.getTitle();
    }
    return *this;
}

void Sorcerer::introduce() const {
    std::cout << "I am " << _name ", " << _title << ", and I like ponies !" std::endl;
}

void Sorcerer::polymorph(Victim const & target) const {
    target.getPolymorphed();
}

std::string getName(void) const {
    return _name;
}

std::string getTitle(void) const {
    return _title;
}