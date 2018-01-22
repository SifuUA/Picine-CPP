#include "Form.h"

Form::Form() : isSign(isSign), name(name) {}

Form::~Form() {

}

Form::Form(const Form &src) {
    *this = src;
}

bool Form::operator==(const Form &rhs) const {
    return name == rhs.name &&
           isSign == rhs.isSign;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << " cannot sign " << form.name << " isSign: " << form.isSign;
    return os;
}


const char *Form::GradeTooHighException::what() const {
    return exception::what();
}

Form::GradeTooHighException::GradeTooHighException() {

}

Form::GradeTooHighException::~GradeTooHighException() {

}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &src) {

}

Form::GradeTooHighException Form::GradeTooHighException::operator==(const Bureaucrat &rhs) const {
    return Form::GradeTooHighException();
}
