#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <ctime>
#include <cmath>

int main() {
    srand(time(0));
    FragTrap f1("José");
    FragTrap f2 = FragTrap();
    FragTrap f3 = FragTrap();

    ScavTrap s1("Jean-Archibald");
    ScavTrap s2 = ScavTrap();
    ScavTrap s3 = ScavTrap();

    f3 = f1;
    s3 = s1;
    std::cout << "========== FRAGTRAPS ==========" << std::endl;
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
    std::cout << std::endl << "========== SCAVTRAPS ==========" << std::endl;
    s1.rangedAttack("randomGuy");
    s2.meleeAttack("randomGuy");
    s3.takeDamage(20);
    std::cout << "s3 HP : " << s3.getHp() << std::endl;
    s3.beRepaired(10);
    std::cout << "s3 HP : " << s3.getHp() << std::endl;
    for (int i = 0; i < 6; i++) {
        s1.challengeNewcomer();
    }
    return 0;
}