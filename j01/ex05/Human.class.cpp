#include "Human.class.hpp"
#include <sstream>

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify() {
    std::stringstream ss;
    ss << this;
    return ss.str();
}
const Brain &Human::getBrain() {
    return _brain;
}