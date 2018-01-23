//
// Created by okres on 1/23/18.
//

#include <cstdlib>
#include <iostream>
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) {
    *this = src;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : target(target), Form("RobotomyRequestForm", 72, 45){}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const Form &src) {}

bool RobotomyRequestForm::operator==(const Form &rhs) const {
    return *this == rhs;
}

void RobotomyRequestForm::isExecute() {
    srand( time(0) );
    int res = rand() % 2;
    if (res == 1) {
        std::cout << "Brrrrrrrr, " << this->target << " has been robotomized successfully!" << std::endl;
    }
    else
        std::cout << this->target << "Epic fail!" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const {
    return target;
}

