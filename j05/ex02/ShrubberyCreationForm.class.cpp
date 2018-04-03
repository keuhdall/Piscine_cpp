#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
    Form("Shrubbery Creation Form", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    _isSigned = rhs.getSigned();
    return *this;
}

void ShrubberyCreationForm::action() const {
    std::ofstream ofs(_target + "_shrubbery");
    ofs << "    oxoxoo    ooxoo" << std::endl;
    ofs << "  ooxoxo oo  oxoxooo" << std::endl;
    ofs << " oooo xxoxoo ooo ooox" << std::endl;
    ofs << " oxo o oxoxo  xoxxoxo" << std::endl;
    ofs << "  oxo xooxoooo o ooo" << std::endl;
    ofs << "    ooo\\oo\\  /o/o" << std::endl;
    ofs << "        \\  \\/ /" << std::endl;
    ofs << "         |   /" << std::endl;
    ofs << "         |  |" << std::endl;
    ofs << "         | D|" << std::endl;
    ofs << "         |  |" << std::endl;
    ofs << "         |  |" << std::endl;
    ofs << "  ______/____\\____" << std::endl;
    ofs.close();
}