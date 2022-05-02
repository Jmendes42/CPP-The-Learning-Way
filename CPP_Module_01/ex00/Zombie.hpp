#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>



class Zombie
{
    std::string name;
    public:
        Zombie(std::string name)
        {
            this->name = name;
        }
        ~Zombie()
        {
            std::cout << name << ": Was destroyed" << std::endl;
        }
        void    announce(void);
        
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif