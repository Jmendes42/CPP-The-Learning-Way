#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
    Bureaucrat  joao("Joao", 1);
    Intern      betinho;
    Form        *robot;
    Form        *shrubbery;
    Form        *presidential;

    std::cout << "------------------------------\n";

    robot = betinho.makeForm("RobotomyRequestForm", "dog");
    shrubbery = betinho.makeForm("ShrubberyCreationForm", "Office");
    presidential = betinho.makeForm("PresidentialPardonForm", "sister");

    std::cout << "------------------------------\n";

    robot->beSigned(joao);
    shrubbery->beSigned(joao);
    presidential->beSigned(joao);

    std::cout << "------------------------------\n";

    joao.executeForm(*robot);
    joao.executeForm(*shrubbery);
    joao.executeForm(*presidential);

    std::cout << "------------------------------\n";
    
    delete robot;
    delete shrubbery;
    delete presidential;

    return 0;
}