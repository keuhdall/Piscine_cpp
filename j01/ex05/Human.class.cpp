#include "Human.class.hpp"
#include <string.h>
#include <sstream>
#include <iostream>

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify() {
    std::stringstream ss;
    ss << this;
    return ss.str();
}
Brain &Human::getBrain() {
    return this->_brain;
}