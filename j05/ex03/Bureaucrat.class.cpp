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
    if (_grade - 1 < 1) {
        throw GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::demote() {
    if (_grade + 1 > 150) {
        throw GradeTooLowException();
    }
    _grade++;
}

void Bureaucrat::signForm(Form & f) {
    try {
        f.beSigned(*this);
    } catch (Form::GradeTooLowException & e) {
        std::cerr << _name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
        return;
    }
    std::cout << _name << " signs " << f.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & f) {
    try {
        f.execute(*this);
    } catch (Form::GradeTooLowException & e) {
        std::cerr << _name << " could not execute form : grade is too low" << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << "Name : " << rhs.getName() << " grade : " << rhs.getGrade() << std::endl;
    return o;
}