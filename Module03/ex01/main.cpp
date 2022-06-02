#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Carla");
    ClapTrap c("Carlos");

    b.takeDamage(10);
    b.attack("random");
    c.takeDamage(9);
    c.beRepaired(9);
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
    c.attack("random");
}