#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie {
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce(void);
    private:
        std::string _name;
        std::string _type;
};

#endif