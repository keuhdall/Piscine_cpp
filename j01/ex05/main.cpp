#include "Brain.class.hpp"
#include "Human.class.hpp"
#include <iostream>

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    return 0;
}