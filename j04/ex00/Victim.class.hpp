#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

#include <iostream>
#include <string>

class Victim {
    public:
        Victim(std::string name);
        Victim(Victim const & src);
        ~Victim();
        Victim & operator=(Victim const & rhs);
        void introduce(void) const;
        virtual void getPolymorphed() const;
        std::string getName(void) const;

    protected:
        std::string _name;
    private:
        Victim();
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif