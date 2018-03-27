#ifndef ZOMBIEEVENT_CLASS_HPP
# define ZOMBIEEVENT_CLASS_HPP

#include "Zombie.class.hpp"

class ZombieEvent {
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
    
    private:
        std::string _randomNames[10];
        std::string _type;
        std::string _genName(const int len);
};

#endif