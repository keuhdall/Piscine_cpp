#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

#include <string>

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string, title);
        Sorcerer(Sorcerer const & src);
        ~Sorcerer();
        Sorcerer & operator=(Sorcerer const & rhs);
        std::string getName(void) const;
        std::string getTitle(void) const;
    
    private:
        Sorcerer();
        std::string _name;
        std::string _title;
};

#endif