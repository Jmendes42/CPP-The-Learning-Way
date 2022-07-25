#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include "iostream"

class WrongAnimal
{
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(std::string type);

        void        operator = (WrongAnimal &animal);

        virtual std::string     getType() const;
        virtual void            makeSound() const;
};

#endif