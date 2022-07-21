#include "Intern.hpp"

//CONSTRUCORS
Intern::Intern()
{
    std::cout << "Default Intern constructor" << std::endl;
}

Intern::Intern(std::string name)
{
    std::cout << "Copy constructor for Intern " << name << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default Intern destructor" << std::endl;
}

//METHODS
Form*    Intern::makeForm(std::string name, std::string target)
{
    Form *(*make)(std::string);

    (!name.compare("RobotomyRequestForm") && (make = robot));
    (!name.compare("ShrubberyCreationForm") && (make = shrubbery));
    (!name.compare("PresidentialPardonForm") && (make = presidential));
    return make(target);
}

//OVERLOADS
void    Intern::operator = (Intern intern)
{
    *this = intern;
}

//COMPLEMENTAR
Form*   robot(std::string target)
{
    Form *form = new RobotomyRequestForm(target);
    
    return form;
}

Form*   shrubbery(std::string target)
{
    Form *form = new ShrubberyCreationForm(target);
    
    return form;
}

Form*   presidential(std::string target)
{
    Form *form = new PresidentialPardonForm(target);
    
    return form;
}