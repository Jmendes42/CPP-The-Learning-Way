#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    const std::string   _name;
    int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        void    operator = (Bureaucrat &bureaucrat);
        
        void    executeForm(Form const & form);
        void    signForm(bool status, std::string name);
        void    decrementGrade(int i);
        void    incrementGrade(int i);

        const std::string   getName() const;
        int                 getGrade() const;
};

class GradeTooHighException: public std::exception
{
    public:
        const virtual char* what() const throw()
        {
            return "Bureaucrat: Grade too high";
        }
};

class GradeTooLowException: public std::exception
{
    public:
        const virtual char* what() const throw()
        {
            return "Bureaucrat: Grade too low";
        }
};

std::ostream         &operator << (std::ostream &output, Bureaucrat &bureaucrat);

#endif