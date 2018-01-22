#include "Form.h"

Form::Form() {
}

Form::~Form() {
}

Form::Form(const std::string &name, int gradeSign, int gradeExec) throw(GradeTooLowException, GradeTooHighException): name(name) {
    if (gradeSign > LOWEST || gradeExec > LOWEST)
        throw GradeTooLowException();
    else if (gradeSign < HIGEST || gradeExec < HIGEST)
        throw GradeTooHighException();
    this->gradeSign = gradeSign;
    this->gradeExec = gradeExec;
}

Form::Form(const Form &src) {
    *this = src;
}

void Form::beSigned(Bureaucrat bureaucrat) throw(GradeTooLowException) {
    if (bureaucrat.getGrade() > this->gradeSign)
        throw GradeTooLowException();
    this->isSign = true;
}

const std::string &Form::getName() const {
    return name;
}

int Form::getGradeSign() const {
    return gradeSign;
}

int Form::getGradeExec() const {
    return gradeExec;
}
bool Form::getisSign() const {
    return isSign;
}

bool Form::operator==(const Form &rhs) const {
    return name == rhs.name &&
           gradeSign == rhs.gradeSign &&
           gradeExec == rhs.gradeExec;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << form.getName();
    if (!form.getisSign())
        os << "not ";
    os << " signed, minGradeExec: " << form.getGradeExec()<< " minGradeSign: " << form.getGradeSign();
    return os;
}

const char *Form::GradeTooHighException::what() const throw(){
    return "Very high!";
}

Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooHighException::~GradeTooHighException() throw(){
}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &src) {
}

Form::GradeTooHighException Form::GradeTooHighException::operator==(const Bureaucrat &rhs) const {
    return Form::GradeTooHighException();
}

Form::GradeTooLowException::GradeTooLowException() {
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &src) {
}

Form::GradeTooLowException Form::GradeTooLowException::operator==(const Bureaucrat &rhs) const {
    return Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Very low!";
}