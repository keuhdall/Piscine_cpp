#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "Form.class.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const name);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        void action(void) const;
        
    private:
        std::string const _target;
};

#endif