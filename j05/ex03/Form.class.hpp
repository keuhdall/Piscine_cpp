#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <iostream>
#include <string>

class Bureaucrat;

#include "Bureaucrat.class.hpp"

class Form {
    public:
        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException() {};
                GradeTooLowException(GradeTooLowException const & src) {
                    *this = src;
                }
                virtual ~GradeTooLowException() throw() {};
                virtual const char *what() const throw() {
                    return "grade is too low";
                }
            private:
                GradeTooLowException & operator=(GradeTooLowException const & rhs);
        };

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException() {};
                GradeTooHighException(GradeTooHighException const & src) {
                    *this = src;
                }
                virtual ~GradeTooHighException() throw() {};
                virtual const char *what() const throw() {
                    return "grade is too High";
                }
            private:
                GradeTooLowException & operator=(GradeTooLowException const & rhs);
        };

        Form();
        Form(std::string const name, int gradeToSign, int gradeToExec);
        Form(Form const & src);
        virtual ~Form();
        Form & operator=(Form const & rhs);

        std::string getName(void) const;
        bool getSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExec(void) const;
        void beSigned(Bureaucrat b);
        virtual void execute(Bureaucrat const & executor) const;
        virtual void action(void) const = 0;

    protected:
        std::string const _name;
        bool _isSigned;
        int const _gradeToSign;
        int const _gradeToExec;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif