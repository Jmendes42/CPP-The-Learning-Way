#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    Brain *_brain;
    
    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);

        Dog     &operator = (const Dog &animal);

        void    makeSound() const;
};

#endif