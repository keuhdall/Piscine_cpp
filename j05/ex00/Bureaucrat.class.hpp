#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat {
    public:
        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException() {};
                GradeTooLowException(GradeTooLowException const & src) {
                    *this = src;
                }
                virtual ~GradeTooLowException() throw() {};
                virtual const char *what() const throw() {
                    return "Error : grade too low";
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
                    return "Error : grade too high";
                }
                private:
                    GradeTooHighException & operator=(GradeTooHighException const & rhs);
        };

        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const & src);
        virtual ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & rhs);
        std::string const getName(void) const;
        void setName(std::string name);
        int getGrade(void) const;
        void setGrade(int grade);
        void promote(void);
        void demote(void);

    private:
        std::string const _name;
        int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif