//
// Created by okres on 1/23/18.
//

#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const &src) {
    *this = src;
}
Intern &Intern::operator=(Intern const &rhs) {
    return *this;
}

Form *Intern::makeForm(std::string nameOfForm, std::string targetForForm) {
    Form *form;

    if(nameOfForm == "robotomy request")
        form = new RobotomyRequestForm(targetForForm);
    else if (nameOfForm == "shrubbery request")
        form = new ShrubberyCreationForm(targetForForm);
    else if (nameOfForm == "presidential request")
        form = new PresidentialPardonForm(targetForForm);
    else {
        std::cout << "Not such requests: " << nameOfForm <<std::endl;
        return NULL;
    }

    std::cout << "Intern creates " << form->getName() << std::endl;
}
