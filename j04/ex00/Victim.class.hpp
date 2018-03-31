#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

#include <iostream>
#include <string>

class Victim {
    public:
        Victim();
        Victim(std::string name);
        Victim(Victim const & src);
        ~Victim();
        Victim & operator=(Victim const & rhs);
        void introduce(void) const;
        void getPolymorphed() const;
        std::string getName(void) const;
    
    private:
        std::string _name;
};

#endif