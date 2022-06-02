#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _damage = 0;
        int         _energy = 10;
        int         _hitPoints = 10;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);

        void    operator = (ClapTrap &trap);

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    attack(const std::string &target);
        void    get();
};

#endif