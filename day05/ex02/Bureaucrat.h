//
// Created by okres on 1/22/18.
//

#ifndef CPP_BUREAUCRAT_H
#define CPP_BUREAUCRAT_H
#define HIGEST 1
#define LOWEST 150
#include <ostream>
#include "Form.h"

class Form;

class Bureaucrat {
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
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        bool operator==(const Bureaucrat &rhs) const;
        const std::string &getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form &form) const;
        void executeForm(Form  &form) const;

private:
        std::string name;
        int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
#endif //CPP_BUREAUCRAT_H
