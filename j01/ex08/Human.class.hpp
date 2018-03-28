#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

#include <string>

class Human {
    public:
        void action(std::string const & action_name, std::string const & target);
    private:
        void meleeAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void intimidatingShout(std::string const & target);
};

#endif