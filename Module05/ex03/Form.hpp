#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string   _name;
    bool                _status;
    const int           _gradeSign;
    const int           _gradeExec;

    std::string         _executeTarget;

    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExec, std::string executeTarget);
        Form(Form &form);
        ~Form();

        void    operator = (Form &form);

        bool    execute(Bureaucrat const &executor) const;
        void    action(std::string action, std::string target) const;
        void    beSigned(Bureaucrat &bureaucrat);
        
        const std::string   getName() const;
        std::string         getStatus() const;
        int                 getGradeSign() const;
        int                 getGradeExec() const;
};

std::ostream    &operator << (std::ostream &output, Form &form);

class FormGradeTooHighException: public std::exception
{
    const virtual char* what() const throw()
    {
        return "Form: Grade to high";
    }
};

class FormGradeTooLowException: public std::exception
{
    const virtual char* what() const throw()
    {
        return "Form: Grade too low";
    }
};

#endif