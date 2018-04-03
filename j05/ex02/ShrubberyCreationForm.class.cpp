#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : Form(name, 145, 137) {
    std::ofstream ofs(_name + "_shrubbery");
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

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}