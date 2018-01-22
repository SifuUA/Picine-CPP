#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name){
    if (grade < HIGEST)
        throw GradeTooHighException();
    else if (grade > LOWEST)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    *this = src;
}

bool Bureaucrat::operator==(const Bureaucrat &rhs) const {
    return name == rhs.getName() && grade == rhs.getGrade();
}

const std::string &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::increment(void) {
    if (this->grade <= HIGEST)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement(void) {
    if (this->grade >= LOWEST)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade();
    return os;
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "The grade is highest than highest possible grade!!!";
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &src) {
    *this = src;
}

Bureaucrat::GradeTooHighException Bureaucrat::GradeTooHighException::operator==(const Bureaucrat &rhs) const {
    return Bureaucrat::GradeTooHighException();
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "The grade is lowest than lowest possible grade!!!";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &src) {
    *this = src;
}

Bureaucrat::GradeTooLowException Bureaucrat::GradeTooLowException::operator==(const Bureaucrat &rhs) const {
    return Bureaucrat::GradeTooLowException();
}
