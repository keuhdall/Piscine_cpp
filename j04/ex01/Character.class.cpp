#include "Character.class.hpp"

Character::Character() : _name("undefined"), _ap(0), _w(NULL) {
}

Character::Character(std::string const & name) : _name(name), _ap(40), _w(NULL) {
}

Character::Character(Character const & src) {
    *this = src;
}

Character::~Character() {
}

Character & Character::operator=(Character const & rhs) {
    if (this != &rhs) {
        _name = rhs.getName();
        _ap = rhs.getAP();
    }
    return *this;
}

void Character::recoverAP() {
    _ap += 10;
    _ap = _ap > 40 ? 40 : _ap;
}

void Character::equip(AWeapon* w) {
    _w = w;
}

void Character::attack(Enemy* e) {
    if (!e || !_w || _w->getAPCost() > _ap) return;
    std::cout << _name << " attacks " << e->getType() << " with a " << _w->getName() << std::endl;
    _w->attack();
    _ap -= _w->getAPCost();
    e->takeDamage(_w->getDamage());
}

std::string Character::getName() const {
    return _name;
}
int Character::getAP(void) const {
    return _ap;
}
AWeapon *Character::getWeapon(void) const {
    return _w;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs) {
    if (rhs.getWeapon())
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed " << std::endl;
    return o;
}