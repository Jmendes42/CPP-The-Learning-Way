#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Form
{
    const std::string   _name;
    bool                _status;
    const int           _gradeSign;
    const int           _gradeExec;

    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(Form &form);
        ~Form();

        void    operator = (Form &form);

        void    beSigned(Bureaucrat &bureaucrat);

        const std::string   getName();
        std::string         getStatus();
        int                 getGradeSign();
        int                 getGradeExec();
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