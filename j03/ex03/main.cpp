#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include <ctime>
#include <cmath>

int main() {
    srand(time(0));

    ClapTrap c1("Pascal");
    ClapTrap c2 = ClapTrap();
    ClapTrap c3 = ClapTrap();

    FragTrap f1("José");
    FragTrap f2 = FragTrap();
    FragTrap f3 = FragTrap();

    ScavTrap s1("Jean-Archibald");
    ScavTrap s2 = ScavTrap();
    ScavTrap s3 = ScavTrap();

    NinjaTrap n1("Henry");
    NinjaTrap n2 = NinjaTrap();
    NinjaTrap n3 = NinjaTrap();

    f3 = f1;
    s3 = s1;
    c3 = c1;
    n3 = n1;

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

    std::cout << std::endl << "========== NINJATRAPS ==========" << std::endl;
    n1.rangedAttack("randomGuy");
    n2.meleeAttack("randomGuy");
    n3.takeDamage(20);
    std::cout << "n3 HP : " << n3.getHp() << std::endl;
    n3.beRepaired(10);
    std::cout << "n3 HP : " << n3.getHp() << std::endl;
    n1.ninjaShoebox(n2);
    n1.ninjaShoebox(s2);
    n1.ninjaShoebox(f2);

    std::cout << std::endl << "========== CLAPTRAPS ==========" << std::endl;
    c1.rangedAttack("randomGuy");
    c2.meleeAttack("randomGuy");
    c3.takeDamage(20);
    std::cout << "c3 HP : " << c3.getHp() << std::endl;
    c3.beRepaired(10);
    std::cout << "c3 HP : " << c3.getHp() << std::endl;
    return 0;
}