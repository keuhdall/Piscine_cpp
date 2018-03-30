#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap {
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap();
        NinjaTrap & operator=(NinjaTrap const & rhs);
        void ninjaShoebox(NinjaTrap& ninja);
        void ninjaShoebox(FragTrap& frag);
        void ninjaShoebox(ScavTrap& scav);
};

#endif