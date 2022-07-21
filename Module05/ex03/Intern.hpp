#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(std::string name);
        ~Intern();
        Form    *makeForm(std::string name, std::string target);
};

Form*   robot(std::string target);
Form*   shrubbery(std::string target);
Form*   presidential(std::string target);

#endif