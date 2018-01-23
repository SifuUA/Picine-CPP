//
// Created by okres on 1/23/18.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) {
    *this = src;
}
ShrubberyCreationForm::ShrubberyCreationForm(const Form &src) : Form(src) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

bool ShrubberyCreationForm::operator==(const Form &rhs) const {
    return Form::operator==(rhs);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : target(target),
                                                                          Form("ShrubberyCreationForm", 145, 137) {}

const std::string &ShrubberyCreationForm::getTarget() const {
    return target;
}

void ShrubberyCreationForm::isExecute() {
    std::ofstream  fout;

    fout.open((this->target + "_shrubbery").c_str());
    if (fout.is_open()) {
        fout << "              v .   ._, |_  .," << "\n";
        fout << "           `-._\\/  .  \\ /    |/_" << "\n";
        fout << "               \\\\  _\\, y | \\//" << "\n";
        fout << "         _\\_.___\\\\, \\\\/ -.\\||" << "\n";
        fout << "           `7-,--.`._||  / / ," << "\n";
        fout << "           /'     `-. `./ / |/_.'" << "\n";
        fout << "                     |    |//" << "\n";
        fout << "                     |_    /" << "\n";
        fout << "                     |-   |" << "\n";
        fout << "                     |   =|" << "\n";
        fout << "                     |    |" << "\n";
        fout << "--------------------/ ,  . \\--------._" << "\n";
    }
    fout.close();
}

