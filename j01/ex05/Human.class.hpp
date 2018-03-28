#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

#include "Brain.class.hpp"
#include <string>

class Human {
    public:
        Human();
        ~Human();
        std::string identify(void);
        const Brain &getBrain(void);
    private:
        const Brain _brain;
};

#endif