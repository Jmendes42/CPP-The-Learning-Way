#include "PresidentialPardonForm.hpp"

//CONSTRUCTORS
PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default PresidentailPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidential): Form("PresidentialPardonForm", 25, 5, NULL)
{
    *this = presidential;
    std::cout << "Copy PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
    _target = target;
    std::cout << "Copy PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default PresidentialPardonForm destructor" << std::endl;
}

//METHODS
//GETTERS
std::string PresidentialPardonForm::getTarget()
{
    return _target;
}
//OVERLOADS
/*void    PresidentialPardonForm::operator = (PresidentialPardonForm &presidential)
{
    *this = presidential;
}*/