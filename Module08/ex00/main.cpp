#include "EasyFind.hpp"

int main()
{
    std::vector<int>::iterator  itr;
    int                         find;
    std::vector<int>            vec42;

    find = 42;
    for (int i = 0; i < 5; i++)
        vec42.push_back(i + 1);

    vec42.push_back(42);
    try
    {
        itr = easyfind(vec42, find);
        std::cout << "Success " << *itr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    vec42.pop_back();
    vec42.pop_back();
    try
    {
        itr = easyfind(vec42, find);
        std::cout << "Success " << *itr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}