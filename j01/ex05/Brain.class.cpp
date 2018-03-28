#include "Brain.class.hpp"
#include <sstream>

Brain::Brain() {
}

Brain::~Brain() {
}

std::string Brain::identify() const {
    std::stringstream ss;
    ss << this;
    return ss.str();
}