#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(std::string type);
        //void    makeSound() const;
};

#endif