#include "Form.hpp"

//CONSTRUCTORS
Form::Form(): _gradeSign(0), _gradeExec(0)
{
    _status = false;
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradExec, std::string executeTarget): 
    _name(name), _gradeSign(gradeSign), _gradeExec(gradExec)
{
    if (gradeSign < 1)
        throw(FormGradeTooHighException());
    if (gradeSign > 150)
        throw(FormGradeTooLowException());
    if (gradExec < 1)
        throw(FormGradeTooHighException());
    if (gradExec > 150)
        throw(FormGradeTooLowException());
    _executeTarget = executeTarget;
    _status = false;
    std::cout << "Copy Form constructor called" << std::endl;
}

Form::Form(Form &form): 
    _name(form._name), _gradeSign(form._gradeSign), _gradeExec(form._gradeExec)
{
    _status = false;
    std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default Form destructor called" << std::endl;
}

//METHODS

bool    Form::execute(Bureaucrat const &executor) const
{
    if (_status == 1)
    {
        if (executor.getGrade() > _gradeExec)
        {
            std::cout << "Bureaucrat " << executor.getName() << " couldn't execute form " << _name << ", insuficient grade" << std::endl;
            throw(FormGradeTooLowException());
        }
        std::cout << "Bureaucrat " << executor.getName() << " executed form " << _name << std::endl;
        if (_name == "ShrubberyCreationForm")
            action("Shrubbery", _executeTarget);
        else if (_name == "RobotomyRequestForm")
            action("Robotomy", _executeTarget);
        else if (_name == "PresidentialPardonForm")
            action("Presidential", _executeTarget);
        return true;
    }
    std::cout << "Bureaucrat " << executor.getName() << " couldn't execute form " << _name << ", missing signature" << std::endl;
    return false;
}

void    Form::action(std::string action, std::string target) const
{
    std::ofstream   file;
    const char      *fileName;
    static int      counter;

    if (action == "Robotomy")
    {
        if (!counter)
            counter = 0;
        if (counter % 2 == 0)
            std::cout << "Robotomy failed" << std::endl;
        else
            std::cout << "ZZZZzzzzzzzzzzzz... " << target << " has been robotomized" << std::endl;
        counter += 1;
    }
    else if (action == "Presidential")
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else if (action == "Shrubbery")
    {
        target.append("_Shrubbery.txt");
        fileName = target.c_str();
        file.open(fileName);
        file << " O" << "\nO O" << "\n | \n";
        file.close();
    }
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() >= _gradeSign)
    {
        bureaucrat.signForm(_status, _name);
        throw(FormGradeTooLowException());
    }
    else
    {
        _status = true;
        bureaucrat.signForm(_status, _name);
    }
}

//GETTERS
const std::string   Form::getName() const
{
    return _name;
}

std::string                Form::getStatus() const
{
    std::string status;

    if (_status == false)
        status = "False";
    else
        status = "True";
    return status;
}

int           Form::getGradeSign() const
{
    return _gradeSign;
}

int           Form::getGradeExec() const
{
    return _gradeExec;
}

//OVERLOADS
void    Form::operator = (Form &form)
{
    _status = form._status;
}

std::ostream    &operator << (std::ostream &output, Form &form)
{
    output << form.getName() << "Form:\nGrade required to sign: " <<
        form.getGradeSign() << "\nGrade required to execute: " << 
            form.getGradeExec() << "\nSigned: " << form.getStatus() << std::endl;
    return output;
}

