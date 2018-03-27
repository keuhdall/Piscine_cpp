#include "Pony.class.hpp"

Pony::Pony() {
    std::cout << "A new pony was born, so cute ! :D" << std::endl;
}

Pony::~Pony() {
    std::cout << "Noooo, the pony is ded !! :(((" << std::endl;
}

void Pony::jump() {
    std::cout << "The pony jumped over the obstacle, yay !" << std::endl;
}