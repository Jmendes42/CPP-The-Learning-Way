#include "ShrubberyCreationForm.hpp"

//CONSTRUCTORS
ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shrubbery): Form("ShrubberyCreationForm", 145, 137, shrubbery._target)
{
    *this = shrubbery;
    std::cout << "Copy ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{
    _target = target;
    std::cout << "Copy ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Default ShrubberyCreationForm destructor" << std::endl;
}