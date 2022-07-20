#include "RobotomyRequestForm.hpp"


//CONSTRUCTORS
RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target)
{
    _target = target;
    std::cout << "Copy RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomy): Form("RobotomyRequestForm", 72, 45, NULL)
{
    *this = robotomy;
    std::cout << "Copy RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default RobotomyRequestForm destructor" << std::endl;
}