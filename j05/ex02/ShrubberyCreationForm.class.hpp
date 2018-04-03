#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "Form.class.hpp"

#include <fstream>

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const name);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        virtual ~ShrubberyCreationForm();

    private:
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
};

#endif