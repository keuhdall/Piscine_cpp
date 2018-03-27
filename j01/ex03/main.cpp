#include "ZombieHorde.class.hpp"

int main() {
    ZombieHorde hordeOf8 = ZombieHorde(8);
    ZombieHorde hordeOf42 = ZombieHorde(42);
    hordeOf8.announce();
    std::cout << "===============================" << std::endl;
    hordeOf42.announce();
    return 0;
}