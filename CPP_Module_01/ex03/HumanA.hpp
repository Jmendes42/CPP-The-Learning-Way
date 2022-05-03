#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    Weapon      *_weapon;
    std::string _name;
    public:
        HumanA(std::string name, Weapon & weapon);
        ~HumanA();
        void    attack();
};

#endif