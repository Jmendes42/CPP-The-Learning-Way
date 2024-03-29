#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat
{
    const std::string   _name;
    int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &bureaucrat);
        ~Bureaucrat();

        void    operator = (Bureaucrat &bureaucrat);
        
        const std::string   getName();
        int                 getGrade();
        void                decrementGrade(int i);
        void                incrementGrade(int i);
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