#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(Fixed const & src);
        Fixed(const int i);
        Fixed(const float f);
        ~Fixed();
        Fixed & operator=(Fixed const & rhs);
        Fixed operator+(Fixed const & rhs);
        Fixed operator-(Fixed const & rhs);
        Fixed operator*(Fixed const & rhs);
        Fixed operator/(Fixed const & rhs);
        bool operator>(Fixed const & rhs);
        bool operator<(Fixed const & rhs);
        bool operator>=(Fixed const & rhs);
        bool operator<=(Fixed const & rhs);
        bool operator==(Fixed const & rhs);
        bool operator!=(Fixed const & rhs);
        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
        static Fixed & min(Fixed & lhs, Fixed & rhs);
        static Fixed const & min(Fixed const & lhs, Fixed const & rhs);
        static Fixed & max(Fixed & lhs, Fixed & rhs);
        static Fixed const & max(Fixed const & lhs, Fixed const & rhs);
    private:
        int _value;
        static const int _nbBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif