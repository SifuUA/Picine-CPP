//
// Created by okres on 1/23/18.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_H
#define CPP_PRESIDENTIALPARDONFORM_H


#include "Form.h"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(PresidentialPardonForm &src);
        PresidentialPardonForm(std::string const &target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const Form &src);
        virtual bool operator==(const Form &rhs) const;
        void isExecute();
        const std::string &getTarget() const;

    private:
        std::string target;
};


#endif //CPP_PRESIDENTIALPARDONFORM_H
