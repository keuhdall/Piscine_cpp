#include "Human.class.hpp"

int main() {
    Human bob;
    bob.action("meleeAttack", "randomTarget");
    bob.action("rangedAttack", "randomTarget");
    bob.action("intimidatingShout", "randomTarget");
    bob.action("peeOn", "randomTarget");
    return 0;
}