#include "FragTrap.class.hpp"
#include <ctime>
#include <cmath>

int main() {
    srand(time(0));
    FragTrap f1("José");
    FragTrap f2 = FragTrap();
    FragTrap f3 = FragTrap();

    f3 = f1;
    f1.rangedAttack("randomGuy");
    f2.meleeAttack("randomGuy");
    f3.takeDamage(20);
    std::cout << "f3 HP : " << f3.getHp() << std::endl;
    f3.beRepaired(10);
    std::cout << "f3 HP : " << f3.getHp() << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "f1 Energy : " << f1.getEnergy() << std::endl;
        f1.vaulthunter_dot_exe("randomTarget");    
    }
    return 0;
}