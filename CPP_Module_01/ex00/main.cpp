#include "Zombie.hpp"

int     main(void)
{
    Zombie *_zombie;
    std::string name;
    std::string memory;

    std::cout << "* Create new Zombie *" << std::endl;
    std::cout << "Choose Zombie name:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Zombie or Chump?" << std::endl;
    std::getline(std::cin, memory);
    while (memory != "Zombie" && memory != "Chump")
        std::getline(std::cin, memory);
    if (memory == "Chump")
        randomChump(name);
    if (memory == "Zombie")
    {
        std::string action;

        _zombie = newZombie(name);
        while (action != "Destroy")
        {
            std::cout << "Choose action:" << std::endl;
            std::cout << "1 -> Announce\n 2 -> Destroy" << std::endl;
            if (action == "Announce")
                _zombie->announce();
            //else if(action == "destroy")
        }
    }
    return (0);
}