#include "ScalarConversion.class.hpp"

ScalarConversion::ScalarConversion(std::string const value) : _value(value) {
}

ScalarConversion::ScalarConversion(ScalarConversion const & src) {
    *this = src;
}

ScalarConversion::~ScalarConversion() {
}

ScalarConversion & ScalarConversion::operator=(ScalarConversion const & rhs) {
    (void)rhs;
    return *this;
}

void ScalarConversion::displayChar(void) {
    try {
        char c = std::stoi(_value);
        if (isprint(c))
            std::cout << "char : '" << c << "'" << std::endl;
        else
            std::cout << "char : non displayable" << std::endl;
    } catch (std::invalid_argument & e) {
        std::cerr << "char : impossible" << std::endl;
    }
}

void ScalarConversion::displayInt(void) {
    try {
        std::cout << "int : " << std::stoi(_value) << std::endl;
    } catch (std::invalid_argument & e) {
        std::cerr << "int : impossible" << std::endl;
    }
}

void ScalarConversion::displayFloat(void) {
    try {
        std::cout << std::fixed << std::setprecision(1) << "float : " << std::stof(_value) << "f" << std::endl;
    } catch (std::invalid_argument & e) {
        std::cerr << "float : impossible" << std::endl;
    }
}

void ScalarConversion::displayDouble(void) {
    try {
        std::cout << std::fixed << std::setprecision(1) << "double : " << std::stod(_value) << std::endl;
    } catch (std::invalid_argument & e) {
        std::cerr << "double : impossible" << std::endl;
    }
}