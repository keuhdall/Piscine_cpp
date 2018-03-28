#include "Fixed.class.hpp"

const int Fixed::_nbBits = 8;

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}