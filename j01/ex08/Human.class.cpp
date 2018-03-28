#include "Human.class.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target) {
    std::cout << "Melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "KOI KOI KOI KESKYA " << target << " ???" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    void (Human::*funTab[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    for (int i = 0; i < 3; i++) {
        if (!action_name.compare(actions[i]))
            (this->*(funTab[i]))(target);
    }
}