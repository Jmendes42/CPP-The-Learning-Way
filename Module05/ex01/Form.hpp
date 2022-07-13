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
        Form(const Form &form);
        ~Form();

        void    operator = (const Form &form);

        void    beSigned(Bureaucrat &bureaucrat);

        const std::string   getName();
        bool                getStatus();
        const int           getGradeSign();
        const int           getGradeExec();
};

std::ostream    &operator << (std::ostream &output, Form &form);

class GradeTooHighException: public std::exception
{
    const virtual char* what() const throw()
    {
        return "Form: Grade to high";
    }
};

class GradeTooLowException: public std::exception
{
    const virtual char* what() const throw()
    {
        return "Form: Grade too low";
    }
};

#endif