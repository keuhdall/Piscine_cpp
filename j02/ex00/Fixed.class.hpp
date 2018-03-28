#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {
    public:
        Fixed();
        Fixed(Fixed const & src);
        ~Fixed();
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void);
        void setRawBits( int const raw );
    
    private:
        int _fpValue;
        static const int bits;
};

#endif