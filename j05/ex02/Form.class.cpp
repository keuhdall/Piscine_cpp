#include "Form.class.hpp"

Form::Form() : _name("undefined"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
    _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
    if (_gradeToExec < 1 || _gradeToSign < 1)
        throw GradeTooHighException();
    else if (_gradeToExec > 150 || _gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & src) : _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec()) {
    *this = src;
}

Form::~Form() {
}

Form & Form::operator=(Form const & rhs) {
    _isSigned = rhs.getSigned();
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _isSigned;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExec() const {
    return _gradeToExec;
}

void Form::beSigned(Bureaucrat b) {
    if (b.getGrade() > _gradeToSign) {
        throw GradeTooLowException();
        return;
    }
    _isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const {
    if (!_isSigned) {
        std::cerr << "This form is not signed !" << std::endl;
    } else if (executor.getGrade() > _gradeToExec) {
        throw GradeTooLowException();
    } else {
        action();
    }
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
    o << "Name : " << rhs.getName() << " Signed : " << (rhs.getSigned() ? ("yes") : ("no")) << " Grade to sign : "
        << rhs.getGradeToSign() << " Grade to exec : " << rhs.getGradeToExec() << std::endl;
    return o;
}