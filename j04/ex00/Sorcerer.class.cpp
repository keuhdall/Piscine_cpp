#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer(std::string name, std::string, title) : _name(name), _title(title) {
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    *this = src;
}

Sorcerer::~Sorcerer() {
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
        _title = rhs.getTitle();
    }
    return *this;
}

std::string getName(void) const {
    return _name;
}

std::string getTitle(void) const {
    return _title;
}