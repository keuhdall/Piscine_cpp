#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

int main(void) {
    srand(time(0));
    Bureaucrat john("John", 1);
    std::cout << "Created John. Grade : 1" << std::endl;
    Bureaucrat matt("Matt", 60);
    std::cout << "Created Matt. Grade : 60" << std::endl;
    
    std::cout << std::endl << "==================" << std::endl << std::endl;

    ShrubberyCreationForm treeForm("Home");
    RobotomyRequestForm robotForm("Bob");
    PresidentialPardonForm pardonForm("John");


    std::cout << "Matt execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.executeForm(robotForm);
    std::cout << std::endl << "Matt signs RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.signForm(robotForm);
    std::cout << std::endl << "Matt execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.executeForm(robotForm);
    std::cout << std::endl << "John execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    john.executeForm(robotForm);

    std::cout << std::endl << "John signs ShrubberyCreationForm (sign 145 ; exec 137)" << std::endl;
    john.signForm(treeForm);
    std::cout << std::endl << "John execute ShrubberyCreationForm (sign 145 ; exec 137)" << std::endl;
    john.executeForm(treeForm);

    std::cout << std::endl << "John signs PresidentialPardonForm (sign 25 ; exec 5)" << std::endl;
    john.signForm(pardonForm);
    std::cout << std::endl << "John execute PresidentialPardonForm (sign 25 ; exec 5)" << std::endl;
    john.executeForm(pardonForm);
    return 0;
}