#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

class Peon {
    public:
        Peon();
        Peon(Peon const & src);
        ~Peon();
        Peon & operator=(Peon const & rhs);
};

#endif