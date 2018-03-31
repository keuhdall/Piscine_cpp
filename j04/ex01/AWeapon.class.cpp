#include "AWeapon.class.hpp"

AWeapon::AWeapon() : _name("undefined"), _apcost(0), _damage(0) {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::AWeapon(AWeapon const & src) {
    *this = src;
}

AWeapon::~AWeapon() {
}

std::string const & AWeapon::getName() const {
    return _name;
}

int AWeapon::getAPCost() const {
    return _apcost;
}

int AWeapon::getDamage() const {
    return _damage;
}