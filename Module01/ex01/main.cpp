#include "Zombie.hpp"

int     main(void)
{
    int         N;
    Zombie      *hord;
    std::string name;
    std::string action;

    std::cout << "* Creating Zombie Hoard *" << std::endl;
    std::cout << "How many Zombies?" << std::endl;
    std::cin >> N;
    std::cout << "Choose name:" << std::endl;
    std::cin >> name;
    hord = Zombie::zombieHorde(N, name);
    while (action != "2")
    {
        std::cout << "Choose action: \n1: Announce Hoard \n2: Destroy Hoard" << std::endl;
        std::cin >> action;
        if (action == "1")
        {
            for (int i = 0; i < N; i++)
                hord[i].announce();
        }
        if (action == "2")
            delete[] hord;
    }
    return (0);
}