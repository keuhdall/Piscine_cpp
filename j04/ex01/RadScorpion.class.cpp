#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
    *this = src;
}

RadScorpion::~RadScorpion() {
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs) {
    if (this != &rhs) {
        _hp = rhs.getHP();
        _type = rhs.getType();
    }
    return *this;
}

void RadScorpion::takeDamage(int dmg) {
    _hp -= dmg;
    _hp = _hp < 0 ? 0 : _hp;
    if (!_hp)
        std::cout << "* SPROTCH *" << std::endl;
}