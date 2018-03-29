#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::_nbBits = 8;

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(const int i) : _value(i << _nbBits) {
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _nbBits))) {
}

Fixed::Fixed(const Fixed & rhs) {
    *this = rhs;
}

Fixed & Fixed::operator=(const Fixed & rhs) {
    if (this != &rhs)
        _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
    return ;
}

int Fixed::toInt() const {
    return (getRawBits() >> _nbBits);
}

float Fixed::toFloat() const {
    return ((float)_value) / (1 << _nbBits);
}

Fixed& Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    _value++;
    return tmp;
}

Fixed& Fixed::operator--() {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    _value--;
    return tmp;
}

bool Fixed::operator>(Fixed const & rhs) { return _value > rhs.getRawBits(); }
bool Fixed::operator<(Fixed const & rhs) { return _value < rhs.getRawBits(); }
bool Fixed::operator>=(Fixed const & rhs) { return _value >= rhs.getRawBits(); }
bool Fixed::operator<=(Fixed const & rhs) { return _value <= rhs.getRawBits(); }
bool Fixed::operator==(Fixed const & rhs) { return _value == rhs.getRawBits(); }
bool Fixed::operator!=(Fixed const & rhs) { return _value != rhs.getRawBits(); }

Fixed Fixed::operator+(Fixed const& rhs) {
    Fixed tmp;
    tmp.setRawBits(_value + rhs._value);
    return tmp;
}

Fixed Fixed::operator-(Fixed const& rhs) {
    Fixed tmp;
    tmp.setRawBits(_value - rhs._value);
    return tmp;
}

Fixed Fixed::operator*(Fixed const& rhs) {
    Fixed tmp;
    tmp.setRawBits((_value * rhs._value) >> _nbBits);
    return tmp;
}

Fixed Fixed::operator/(Fixed const& rhs) {
    Fixed tmp(this->toFloat() / rhs.toFloat());
    return tmp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
    return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

const Fixed& Fixed::min(Fixed const& lhs, Fixed const& rhs) {
    return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
    return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}

const Fixed& Fixed::max(Fixed const& lhs, Fixed const& rhs) {
    return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}

Fixed::~Fixed() {
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}