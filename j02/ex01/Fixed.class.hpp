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
        int getRawBits(void) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
    
    private:
        int _value;
        static const int _nbBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif