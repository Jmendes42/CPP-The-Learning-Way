#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog: public Animal
{
    Brain *_brain;
    
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        void    makeSound() const;
};

#endif