#include "Intern.class.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {
}

Form *Intern::_newShrubberyCreationForm(std::string const target) {
    return new ShrubberyCreationForm(target);
}

Form *Intern::_newRobotomyRequestForm(std::string const target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::_newPresidentialPardonForm(std::string const target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const form, std::string const target) {
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    Form *(Intern::*funArray[])(std::string const) = {
        &Intern::_newShrubberyCreationForm,
        &Intern::_newRobotomyRequestForm,
        &Intern::_newPresidentialPardonForm
    };

    for (int i = 0; i < 3; i++) {
        if (!form.compare(formNames[i]))
            return (this->*(funArray[i]))(target);
    }
    std::cerr << "Error : form not found." << std::endl;
    return NULL;
}

Intern & Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
}