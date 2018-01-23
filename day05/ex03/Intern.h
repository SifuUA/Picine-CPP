//
// Created by okres on 1/23/18.
//

#ifndef CPP_INTERN_H
#define CPP_INTERN_H

#include <iostream>
#include "Form.h"

class Intern {
    public:
        Form * makeForm(std::string const nameOfForm, std::string const targetForForm);
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern &operator=(Intern const &rhs);
};

#endif //CPP_INTERN_H
