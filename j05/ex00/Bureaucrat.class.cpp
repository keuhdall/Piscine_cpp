#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (_grade < 1) {
        throw GradeTooHighException();
    } else if (_grade > 150) {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    _grade = rhs.getGrade();
    return *this;
}

std::string const Bureaucrat::getName(void) const {
    return _name;
}

int Bureaucrat::getGrade(void) const {

    return _grade;
}

void Bureaucrat::setGrade(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    } else {
        _grade = grade;
    }
}

void Bureaucrat::promote() {
    _grade--;
    if (_grade < 1) {
        throw GradeTooHighException();
    }
}

void Bureaucrat::demote() {
    _grade++;
    if (_grade > 150) {
        throw GradeTooLowException();
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << "Name : " << rhs.getName() << " grade : " << rhs.getGrade() << std::endl;
    return o;
}