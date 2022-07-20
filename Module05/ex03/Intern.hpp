#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern();
        ~Intern();
        Form    *makeForm(std::string name, std::string target, Form*(*make)(std::string));
        Form    *presidential(std::string target);
};

#endif