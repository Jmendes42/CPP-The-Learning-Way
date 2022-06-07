#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat: public Animal
{
    Brain *_brain;
    
    public:
        Cat();
        ~Cat();
        Cat(std::string type);
        void    makeSound() const;
};

#endif