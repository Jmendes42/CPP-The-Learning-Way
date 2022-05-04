#include "Contact.class.hpp"
#include <sstream>

int     ver_name(std::string answer)
{
    if (std::isupper(answer[0]) == false)
            return 1;
    for (int i = 1; i < (int)answer.length(); i++)
    {
        if (std::islower(answer[i]) == false)
            return 1;
    }
    return (0);
}

int     ver_number(std::string answer)
{
    if (answer[0] == '+' || std::isdigit(answer[0]))
    {
        for (int i = 1; i < (int)answer.length(); i++)
        {
            if (answer[i] != ' ' && std::isdigit(answer[i]) == false)
                return (1);
        }
    }
    else 
        return (1);
    return (0);
}

int     verify(std::string parameter, std::string answer)
{
    if (parameter == "name" && ver_name(answer) == 1)
        return (1);
    if (parameter == "number" && ver_number(answer) == 1)
        return (1);
    return (0);
    
}

void    Contact::display(std::string info_type)
{
    if (info_type == "name")
    {
        
        if (first_name.length() > 10)
            std::cout << first_name.substr(0, 9) << ".|";
        else
        {
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << first_name << "|";
        }
        if (last_name.length() > 10)
            std::cout << last_name.substr(0, 9) << ".|";
        else
        {
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << last_name << "|";
        }
        if (nickname.length() > 10)
            std::cout << nickname.substr(0, 9) << '.' << std::endl;
        else
        {
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << nickname << std::endl;
        }
    }
    else
    {
        std::cout << std::endl;
        std::cout << "First Name:     " << first_name << std::endl;
        std::cout << "Last Name:      " << last_name << std::endl;
        std::cout << "Nickname:       " << nickname << std::endl;
        std::cout << "Phone Number:   " << phone_number << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret << std::endl << std::endl;
    }
}

void    Contact::set_parameter()
{
    std::cout << "First name:" << std::endl;
    std::getline(std::cin, first_name);
    while (verify("name", first_name) == 1)
    {
        std::cout << "Error: please try again" << std::endl;
        std::getline(std::cin, first_name);
    }
    std::cout << "Last name:" << std::endl;
    std::getline(std::cin, last_name);
    while (verify("name", last_name) == 1)
    {
        std::cout << "Error: please try again" << std::endl;
        std::getline(std::cin, last_name);
    }
    std::cout << "Nickname:" << std::endl;
    std::getline(std::cin, nickname);
    std::cout << "Phone number:" << std::endl;
    std::getline(std::cin, phone_number);
    while (verify("number", phone_number) == 1)
    {
        std::cout << "Error: please try again" << std::endl;
        std::cin >> phone_number;
    }
    std::cout << "Darkest secret:" << std::endl;
    std::getline(std::cin, darkest_secret);
}