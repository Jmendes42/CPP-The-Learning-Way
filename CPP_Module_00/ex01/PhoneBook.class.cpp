#include "PhoneBook.class.hpp"

void    PhoneBook::set_contact()
{
    int i;
    if (!stands)
        stands = 0;
    if (stands < 8)
        i = stands;
    else
        i = stands % 8;
    contacts[i].set_parameter();
    stands++;
}

void    PhoneBook::set_display()
{
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < stands; i++)
    {
        if (i == 8)
            break ;
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << i << '|';
        contacts[i].display("name");
        
    }
    std::string index_c;
    int         index;
    while (1)
    {
        std::cout << "Choose Index:" << std::endl;
        std::getline(std::cin, index_c);
        while (index_c.length() > 1)
        {
            std::cout << "Wrong index, try again:" << std::endl;
            std::getline(std::cin, index_c);
        }
        index = index_c[0] - 48;
        if (index < 0 || index > stands - 1 || index > 7)
            std::cout << "Wrong index, try again:" << std::endl;
        else    
            break ;
    }
    contacts[index].display("info");
}