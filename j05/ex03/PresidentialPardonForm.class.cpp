#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
    Form("Presidential Pardon Form", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    _isSigned = rhs.getSigned();
    return *this;
}

void PresidentialPardonForm::action() const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}