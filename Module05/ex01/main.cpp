#include "Bureaucrat.hpp"

int main (void)
{
    Bureaucrat j("Joao", 10);
    Bureaucrat p("Pedro", 100);

    std::cout << j;
    std::cout << p;

    std::cout << std::endl;

    try 
    {
        Bureaucrat a("Alexandre", 0);
    }

    catch(std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        j.incrementGrade(5);
        std::cout << j;
        j.incrementGrade(5);
    }
    catch(std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        p.decrementGrade(30);
        std::cout << p;
        p.decrementGrade(30);
    }
    catch(std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    Bureaucrat f("Fabio", 134);
    Bureaucrat a("Alvararo", 1);

    a = f;

    std::cout << a;

    return 0;
}