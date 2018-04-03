#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

#include <string>

class Intern {
    public:
        Intern();
        Intern(Intern const & src);
        virtual ~Intern();
        Form *makeForm(std::string const form, std::string const target);

    private:
        Form *_newShrubberyCreationForm(std::string const);
        Form *_newRobotomyRequestForm(std::string const);
        Form *_newPresidentialPardonForm(std::string const);
        Intern & operator=(Intern const & rhs);
};

#endif