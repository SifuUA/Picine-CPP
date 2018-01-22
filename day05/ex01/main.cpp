#include <iostream>
#include "Bureaucrat.h"

int main() {
    Form form;

    try {
        form = Form("My Form ", 25, 22);
    }
    catch (std::exception &e) {
        std::cout << "Form error catch ";
    }
    std::cout << form << std::endl;
    try
    {
        Bureaucrat	ron("Ron", 21);
        std::cout << ron << std::endl;
        ron.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Ron error catch";
    }

    try
    {
        Bureaucrat	jack("Jack", 4);
        std::cout << jack;
        jack.signForm(form);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << "Jack error catch";
    }
}