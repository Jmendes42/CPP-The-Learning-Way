#include "Intern.hpp"

//CONSTRUCORS
Intern::Intern()
{
    std::cout << "Default Intern constructor" << std::endl;
}

//METHODS
Form*    Intern::makeForm(std::string name, std::string target, Form*(*make)(std::string))
{
    (name.compare("PresidentialPardonForm"))(Form *(*make)(std::string) = );
}

Form*   Intern::presidential(std::string target)
{
    return PresidentialPardonForm(target);
}