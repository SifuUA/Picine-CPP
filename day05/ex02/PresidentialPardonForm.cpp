//
// Created by okres on 1/23/18.
//

#include <iostream>
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) {
    *this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : target(target), Form("PresidentialPardonForm", 25, 5) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const Form &src) : Form(src) {
}

bool PresidentialPardonForm::operator==(const Form &rhs) const {
    return Form::operator==(rhs);
}

void PresidentialPardonForm::isExecute() {
    std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return target;
}
