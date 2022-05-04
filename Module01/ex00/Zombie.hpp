#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>



class Zombie
{
    std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        static Zombie *newZombie(std::string name);
        static void randomChump(std::string name);
        
};


#endif