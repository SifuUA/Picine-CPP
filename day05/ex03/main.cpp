#include <iostream>
#include "Bureaucrat.h"
#include "Intern.h"

int main() {
    Intern someRandomIntern;
    Form* rrf;

    try {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        rrf = someRandomIntern.makeForm("presidential request", "Bender");
    } catch (std::exception &e) {
        std::cout << "Error catched" << std::endl;
    }
    return (0);
}