#include "Bureaucrat.hpp"


//CONSTRUCTORS
Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if ( grade < 1)
        throw(GradeTooHighException());
    else if (grade > 150)
        throw(GradeTooLowException());
    else
        _grade = grade;
    std::cout << "Copy Bureaucrat constructor called" << std::endl;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
}

//GETTERS
const std::string   Bureaucrat::getName()
{
    return (_name);
}

int                 Bureaucrat::getGrade()
{
    return (_grade);
}

//METHODS
void    Bureaucrat::incrementGrade(int i)
{
    if (_grade - i < 1)
        throw(GradeTooHighException());
    _grade -= i;
}

void    Bureaucrat::decrementGrade(int i)
{
    if (_grade + i > 150)
        throw(GradeTooLowException());
    _grade += i;
}

void    Bureaucrat::signForm(bool status, std::string name)
{
    if (status == false)
        std::cout << "Bureaucrat " << _name << ", couldn't sign form " << 
            name << " because of insuficient grade" << std::endl;
    else
        std::cout << "Bureaucrat " << _name << ", signed form " << name << std::endl;
}

//OVERLOADS
void    Bureaucrat::operator = (Bureaucrat &bureaucrat)
{
    _grade = bureaucrat.getGrade();
}

std::ostream         &operator << (std::ostream &output, Bureaucrat &bureaucrat)
{
    output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return output; 
}
