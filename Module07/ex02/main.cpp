#include "Array.hpp"

int main()
{
    int         size = 6;
    Array<int>  A0;
    Array<int>  A1(size);
    Array<Test>  A2(size);

    try
    {
        for (int i = 0; i < size; i++)    
        std::cout << A0[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < size; i++)
        A1[i] = 0;

    try
    {
        for (int i = 0; i < size + 1; i++)    
        std::cout << A1[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "-----------------------------" << std::endl;
        
    for (int i = 0; i < size; i++)    
        std::cout << A1[i] << std::endl;

    for (int i = 0; i < size; i++)    
        A1[i] = i;

    A0 = A1;

    std::cout << std::endl;

    for (int i = 0; i < size; i++)    
        std::cout << A0[i] << std::endl;

    std::cout << "-----------------------------" << std::endl;

    for (int i = 0; i < size; i++)
        std::cout << A2[i].getI() << std::endl;

    std::cout << "-----------------------------" << std::endl;

    return 0;
}