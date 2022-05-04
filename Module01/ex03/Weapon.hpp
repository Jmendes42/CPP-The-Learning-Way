#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
    std::string _type;
    public:
        Weapon();
        Weapon(std::string weapon);
        ~Weapon();
        void                setType(std::string type);
        std::string const&  getType(void);
};

#endif