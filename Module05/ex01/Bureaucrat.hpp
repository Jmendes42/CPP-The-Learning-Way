#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <stdexcept>
#include <iostream>
//#include "Form.hpp"
#include <string>

class Bureaucrat
{
    const std::string   _name;
    int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        void    operator = (Bureaucrat &bureaucrat);
        
        void    decrementGrade(int i);
        void    incrementGrade(int i);
        void    signForm(bool status, std::string name);

        const std::string   getName();
        int                 getGrade();
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