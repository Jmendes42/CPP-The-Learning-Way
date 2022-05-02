#include <iostream>
#include <string>

int     main(void)
{
    std::string brain =  "HI THIS IS BRAIN";
    std::string *ptr = &brain;
    std::string &ref = brain;
    std::cout << &brain << std::endl;
    std::cout << &ref << std::endl;
    std::cout << ptr << std::endl;
    std::cout << brain << std::endl;
    std::cout << ref << std::endl;
    std::cout << *ptr << std::endl;
}