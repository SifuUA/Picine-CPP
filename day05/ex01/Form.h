//
// Created by okres on 1/22/18.
//

#ifndef CPP_FORM_H
#define CPP_FORM_H

#include <string>
#include <ostream>
# include "Bureaucrat.h"

class Bureaucrat;

class Form {

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();
        GradeTooHighException(const GradeTooHighException &src);
        GradeTooHighException operator==(const Bureaucrat &rhs) const;
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        GradeTooLowException(const GradeTooLowException &src);
        GradeTooLowException operator==(const Bureaucrat &rhs) const;
        virtual const char *what() const throw();
    };

    public:
        Form();
        virtual ~Form();
        Form(const Form &src);
        bool operator==(const Form &rhs) const;
        void beSigned(Bureaucrat bureaucrat);

    private:
        std::string name;
        bool isSign;


};

std::ostream &operator<<(std::ostream &os, const Form &form);
#endif //CPP_FORM_H
