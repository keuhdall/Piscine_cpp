#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class Weapon {
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType(void);
        void setType(std::string type);

    private:
        std::string _type;
};

#endif