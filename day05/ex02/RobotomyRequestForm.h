//
// Created by okres on 1/23/18.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_H
#define CPP_ROBOTOMYREQUESTFORM_H


#include "Form.h"

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm(RobotomyRequestForm &src);
    RobotomyRequestForm(std::string const &target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const Form &src);
    virtual bool operator==(const Form &rhs) const;
    void isExecute();
    const std::string &getTarget() const;

private:
    std::string target;
};


#endif //CPP_ROBOTOMYREQUESTFORM_H
