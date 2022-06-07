#ifndef ANIMAL_H
#define ANIMAL_H

#include "iostream"
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);

        void        operator = (Animal &animal);

        virtual std::string     getType() const;
        virtual void            makeSound() const;
};

#endif