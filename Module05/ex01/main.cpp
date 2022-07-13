#include "Form.hpp"

int main (void)
{
    Bureaucrat  joao("Joao", 10);
    Bureaucrat  pedro("Pedro", 100);
    Form        f0;                               
    Form        f1("f1", 50, 25);
    Form        f2("f2", 75, 34);
    Form        f3(f1);

    try
    {
        Form    f4("f4", 0, 30);
    }
    catch(const std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;
    
    try
    {
        std::cout << f1;
        f1.beSigned(pedro);
    }
    catch(const std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    f1.beSigned(joao);
    std::cout << f1;
    std::cout << f2;
    f2 = f1;
    std::cout << f2;

    return 0;
}