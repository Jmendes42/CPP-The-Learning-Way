#include "ClapTrap.hpp"


//CONSTRUCTORS
ClapTrap::ClapTrap()
{
    std::cout << "Default constructor: ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    std::cout << "Copy constructor: ClapTrap with the name " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor: ClapTrap with the name " << _name << std::endl;   
}


//PUBLIC FUNCTIONS
void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0 && _energy > 0)
    {
        _energy--;
        _hitPoints -= amount;
        if (_hitPoints < 0)
            _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points and " << _energy << " energy" << std::endl; 
    }
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has no hit points left" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " has no energy left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0 && _energy > 0)
    {
        _energy--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points" << std::endl;
    }
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has no hit points left" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " has no energy left" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "ClapTrap " << _name << " dealt " << _damage << " to target " << target << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energy << " energy left" << std::endl; 
    }
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has no hit points left" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " has no energy left" << std::endl;
}


//GETTERS SETTERS

void    ClapTrap::get()
{
    std::cout << _name << " hit points " << _hitPoints << " energy " << _energy << std::endl;
}