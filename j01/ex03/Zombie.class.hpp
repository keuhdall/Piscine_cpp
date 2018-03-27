#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie {
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce(void);
        std::string getName(void);
        std::string getType(void);
        void setName(std::string name);
        void setType(std::string type);
    private:
        std::string _name;
        std::string _type;
};

#endif