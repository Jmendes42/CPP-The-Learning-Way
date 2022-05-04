#include "Harl.hpp"

Harl::Harl(void)
{
    type[0] = &Harl::debug;
    type[1] = &Harl::info;
    type[2] = &Harl::warning;
    type[3] = &Harl::error;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i = 0;

    (!level.compare("debug") && (i = 0));
    (!level.compare("info") && (i = 1));
    (!level.compare("warning") && (i = 2));
    (!level.compare("error") && (i = 3));

    (this->*type[i])();
    return ;
}