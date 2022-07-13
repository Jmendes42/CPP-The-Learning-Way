#include "Form.hpp"

//CONSTRUCTORS
Form::Form(): _gradeSign(0), _gradeExec(0)
{
    _status = false;
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradExec): 
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
const std::string   Form::getName()
{
    return _name;
}

std::string                Form::getStatus()
{
    std::string status;

    if (_status == false)
        status = "False";
    else
        status = "True";
    return status;
}

int           Form::getGradeSign()
{
    return _gradeSign;
}

int           Form::getGradeExec()
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