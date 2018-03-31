#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
    *this = src;
}

SuperMutant::~SuperMutant() {
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {
    if (this != &rhs) {
        _hp = rhs.getHP();
        _type = rhs.getType();
    }
    return *this;
}

void SuperMutant::takeDamage(int dmg) {
    _hp -= (dmg - 3);
    _hp = _hp < 0 ? 0 : _hp;
    if (!_hp)
        std::cout << "Aaargh ..." << std::endl;
}