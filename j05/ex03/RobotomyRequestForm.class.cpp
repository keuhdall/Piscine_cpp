#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
    Form("Robotomy Request Form", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    _isSigned = rhs.getSigned();
    return *this;
}

void RobotomyRequestForm::action() const {
    std::cout << "* drilling noises *" << std::endl;
    if (!(rand() % 2))
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotization failed !" << std::endl;
}