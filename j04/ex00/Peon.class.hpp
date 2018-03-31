#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

#include "Victim.class.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        ~Peon();
        Peon & operator=(Peon const & rhs);
        void getPolymorphed(void) const;

    private:
        Peon();
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif