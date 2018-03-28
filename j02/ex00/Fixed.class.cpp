#include "Fixed.class.hpp"

Fixed::bits = 8;

Fixed::Fixed() {
    _fpValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : this(src) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    if (this != &rhs) {
        _bits = rhs.getRawBits();
    return this;
    }
}

int Fixed::getRawBits() {
    std::cout << "getRawBits member function called" << std::endl;
    return _bits;
}

void Fixed::setRawBits(int const raw) {
    _bits = raw;
}