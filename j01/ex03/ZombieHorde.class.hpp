#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP

#include "Zombie.class.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int size);
        ~ZombieHorde();
        void announce(void);
    private:
        Zombie      *zombies;
        int         _size;
        std::string _genName(int len);
};

#endif