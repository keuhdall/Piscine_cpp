#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(Fixed const & src);
        ~Fixed();
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits( int const raw );
    
    private:
        int _value;
        static const int _nbBits;
};

#endif