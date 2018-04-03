#include "Form.class.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
    _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
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
        throw new GradeTooLowException();
        return;
    }
    _isSigned = true;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
    o << "Name : " << rhs.getName() << " Signed : " << (rhs.getSigned() ? ("yes") : ("no")) << " Grade to sign : "
        << rhs.getGradeToSign() << " Grade to exec : " << rhs.getGradeToExec() << std::endl;
    return o;
}