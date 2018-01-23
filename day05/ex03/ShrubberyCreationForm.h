//
// Created by okres on 1/23/18.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_H
#define CPP_SHRUBBERYCREATIONFORM_H


#include "Form.h"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(ShrubberyCreationForm &src);
        ShrubberyCreationForm(std::string const &target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const Form &src);
        virtual bool operator==(const Form &rhs) const;
        void isExecute();
        const std::string &getTarget() const;

    private:
        std::string target;
};
#endif //CPP_SHRUBBERYCREATIONFORM_H
