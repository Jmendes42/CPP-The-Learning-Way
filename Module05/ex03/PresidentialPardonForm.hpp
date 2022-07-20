#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &presidential);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();

        //void    operator = (PresidentialPardonForm &presidential);

        std::string getTarget();
};

#endif