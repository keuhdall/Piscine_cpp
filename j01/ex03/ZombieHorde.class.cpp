#include "ZombieHorde.class.hpp"

std::string ZombieHorde::_genName(int len) {
    std::string name = "";
    const char alphanum[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i) {
        name += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return name;
}

ZombieHorde::ZombieHorde(int size) : _size(size) {
    zombies = new Zombie[size];
    for (int i = 0; i < size; i++) {
        zombies[i].setName(_genName(rand() % 10 + 5));
        zombies[i].setType("Walking zombie");
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < _size; i++) {
        zombies[i].announce();
    }
}