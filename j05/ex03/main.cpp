#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"

int main(void) {
    srand(time(0));
    Bureaucrat john("John", 1);
    std::cout << "Created John. Grade : 1" << std::endl;
    Bureaucrat matt("Matt", 60);
    std::cout << "Created Matt. Grade : 60" << std::endl;
    Intern intern;
    std::cout << "Created an Intern." << std::endl;
    
    std::cout << std::endl << "==================" << std::endl << std::endl;

    Form *robotForm = intern.makeForm("robotomy request", "Bender");
    std::cout << "Intern created robotomy request form" << std::endl;

    std::cout << "Intern created poop authorization form" << std::endl;
    Form *poop = intern.makeForm("poop authorization form", "John");
    if (!poop) {
        std::cerr << "poop authorization form creation failed" << std::endl;
    }

    std::cout << std::endl << "==================" << std::endl << std::endl;

    std::cout << "Matt execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.executeForm(*robotForm);
    std::cout << std::endl << "Matt signs RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.signForm(*robotForm);
    std::cout << std::endl << "Matt execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    matt.executeForm(*robotForm);
    std::cout << std::endl << "John execute RobotomyRequestForm (sign 72 ; exec 45)" << std::endl;
    john.executeForm(*robotForm);

    return 0;
}