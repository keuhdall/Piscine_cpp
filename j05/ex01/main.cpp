#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void) {
    Bureaucrat john("John", 1);
    Bureaucrat matt("Matt", 150);
    Form form1("form1", 1, 1);
    Form form150("form150", 150, 150);
    try {
        john.signForm(form1);
        john.signForm(form150);
        matt.signForm(form1);
        matt.signForm(form150);
    } catch (Form::GradeTooLowException *e) {
        std::cerr << e->what() << std::endl;
    }
    return 0;
}