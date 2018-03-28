#include "Human.class.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target) {
    std::cout << "Melee attack" << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "Ranged attack" << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "KOI KOI KOI KESKYA" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    void (funTab[3])(std::string const & target) = {&this->meleeAttack, &this->rangedAttack, &this->intimidatingShout};
    std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    for (int i = 0; i < 3; i++) {
        if (!action_name.compare(actions[i])) {
            funTab[i](target);
        }
    }
}