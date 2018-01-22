#include <iostream>
#include "Bureaucrat.h"

int main() {
    Bureaucrat bureaucrat = Bureaucrat("BILL", 145);
    std::cout << bureaucrat << std::endl;
    try {
        for (int i = 0; i < 13; ++i) {
            bureaucrat.decrement();
        }
    }catch (std::exception &e) {
        std::cout << "Exception catched from " << bureaucrat.getName() << std::endl;
    }

    Bureaucrat bureaucrat1 = Bureaucrat("JACK", 10);
    std::cout << bureaucrat1 << std::endl;
    try {
        for (int i = 0; i < 13; ++i) {
            bureaucrat1.increment();
        }
    }catch (std::exception &e) {
        std::cout << "Exception catch from " << bureaucrat1.getName() << std::endl;
    }

    Bureaucrat bureaucrat2;
    try {
        bureaucrat2 = Bureaucrat("BRED", 0);
    }catch (std::exception &e) {
        std::cout << "Exception catched from BRED" << std::endl;
    }
}