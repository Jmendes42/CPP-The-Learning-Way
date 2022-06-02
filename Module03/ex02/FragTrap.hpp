#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);

        void highFivesGuys();
};

#endif