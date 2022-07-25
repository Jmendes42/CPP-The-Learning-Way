#ifndef ANIMAL_H
#define ANIMAL_H

#include "iostream"

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);

        Animal    &operator = (const Animal &animal);

        virtual std::string     getType() const;
        virtual void            makeSound() const;
};

#endif