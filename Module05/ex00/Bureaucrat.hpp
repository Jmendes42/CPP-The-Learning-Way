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
        ~Bureaucrat();

        void    operator = (Bureaucrat &bureaucrat);
        
        const std::string   getName();
        int                 getGrade();
        void                decrementGrade(int i);
        void                incrementGrade(int i);
};

class highGrade: public std::exception
{
    public:
        const virtual char* what() const throw()
        {
            return "Bureaucrat::GradeTooHighException";
        }
};

class lowGrade: public std::exception
{
    public:
        const virtual char* what() const throw()
        {
            return "Bureaucrat::GradeTooLowException";
        }
};

std::ostream         &operator << (std::ostream &output, Bureaucrat &bureaucrat);
//std::ostream         &operator << (std::ostream &output, std::exception &exception);

#endif