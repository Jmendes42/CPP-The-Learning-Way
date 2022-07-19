#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
    Bureaucrat              joao("Joao", 1);
    Bureaucrat              pedro("Pedro", 150);
    PresidentialPardonForm  f0;
    PresidentialPardonForm  f1("Sister");
    ShrubberyCreationForm   f2("Office");
    RobotomyRequestForm     f3("Dog");

    std::cout << "------------------------------\n";

    f2.beSigned(joao);
    std::cout << f2.getStatus() << std::endl;
    joao.executeForm(f2);
    std::cout << f2;

    std::cout << "------------------------------\n";

    f1.getStatus();
    joao.executeForm(f1);

    std::cout << "------------------------------\n";

    try
    {
        pedro.executeForm(f2);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    std::cout << "------------------------------\n";

    f1.beSigned(joao);
    joao.executeForm(f1);

    std::cout << "------------------------------\n";
    
    f3.beSigned(joao);
    joao.executeForm(f3);
    joao.executeForm(f3);

    std::cout << "------------------------------\n";
    
    return 0;
}