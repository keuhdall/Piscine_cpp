#include "ZombieEvent.class.hpp"



ZombieEvent::ZombieEvent() : _type("Walking zombie") {
}

ZombieEvent::~ZombieEvent() {
}

void ZombieEvent::setZombieType(std::string type) {
    _type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, _type);
}

std::string ZombieEvent::_genName(int len) {
    std::string name = "";
    const char alphanum[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i) {
        name += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return name;
}

Zombie *ZombieEvent::randomChump() {
    Zombie *z = new Zombie(_genName(rand() % 10 + 5), _type);
    z->announce();
    return z;
}