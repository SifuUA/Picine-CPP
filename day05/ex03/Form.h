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

    class NotSignException : public std::exception {
    public:
        NotSignException();
        virtual ~NotSignException() throw();
        NotSignException(const NotSignException &src);
        NotSignException operator==(const Bureaucrat &rhs) const;
        virtual const char *what() const throw();
    };

    public:
        Form();
        virtual ~Form();
        Form(const std::string &name, int gradeSign, int gradeExec) throw(GradeTooHighException, GradeTooLowException);
        Form(const Form &src);

        virtual bool operator==(const Form &rhs) const;
        void beSigned(Bureaucrat bureaucrat) throw(GradeTooLowException);
        const   std::string &getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getisSign() const;
        void execute(Bureaucrat const &executor) throw (NotSignException, GradeTooLowException);
    private:
        std::string name;
        int     gradeSign;
        int     gradeExec;
        bool    isSign;
        virtual void isExecute();



};

std::ostream &operator<<(std::ostream &os, const Form &form);
#endif //CPP_FORM_H
