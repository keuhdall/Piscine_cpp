#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "Form.class.hpp"

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const name);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
        void action(void) const;
    
    private:
        std::string const _target;
};

#endif