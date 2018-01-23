#include <iostream>
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main() {
    ShrubberyCreationForm	form1("agrus");
    RobotomyRequestForm		form2("t-34");
    PresidentialPardonForm	form3("president");
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;

    form1.isExecute();

    try
    {
        Bureaucrat	ron("Ron", 150);
        std::cout << ron << std::endl;;
        ron.signForm(form1);
        ron.executeForm(form1);
        std::cout << form1 << std::endl;;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR Ron" << std::endl;
    }

    try
    {
        Bureaucrat	tom("Tom", 130);
        std::cout << tom << std::endl;
        tom.signForm(form1);
        tom.executeForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR Tom" << std::endl;
    }

    try
    {
        Bureaucrat	benjamin("President ", 2);
        std::cout << benjamin << std::endl;
        benjamin.executeForm(form1);
        std::cout << form1 << std::endl;

        benjamin.signForm(form2);
        benjamin.executeForm(form2);
        std::cout << form2 << std::endl;

        benjamin.signForm(form3);
        benjamin.executeForm(form3);
        std::cout << form3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR Jule" << std::endl;
    }

    return (0);
}