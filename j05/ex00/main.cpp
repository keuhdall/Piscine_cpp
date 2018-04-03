#include "Bureaucrat.class.hpp"

int main(void) {
    std::cout << " === OK === " << std::endl;

    Bureaucrat bob("Bob", 1);
    Bureaucrat john("John", 150);
    std::cout << bob;
    std::cout << john;

    std::cout << std::endl << " === Exceptions === " << std::endl;
    try {
        Bureaucrat james("James", 151);
        Bureaucrat matt("Matt", 0);
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cerr << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooLowException & e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        bob.promote();
    } catch (Bureaucrat::GradeTooHighException & e) {
        bob.setGrade(1);
        std::cerr << e.what() << std::endl;
    }
    
    try {
        john.demote();
    } catch (Bureaucrat::GradeTooLowException & e) {
        john.setGrade(150);
        std::cerr << e.what() << std::endl;
    }
    
    try {
        bob.setGrade(-1);
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Unhandled exception here : " << std::endl;
    john.setGrade(2000);
    return 0;
}