#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(std::string type);
        void    makeSound() const;
};

#endif