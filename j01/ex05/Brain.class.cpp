#include "Brain.class.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {
}

Brain::~Brain() {
}

std::string Brain::identify() {
    std::stringstream ss;
    ss << this;
    return ss.str();
}