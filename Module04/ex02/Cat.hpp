#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    Brain *_brain;

    public:
        Cat();
        Cat(const Cat &cat);
        ~Cat();
        Cat     &operator = (const Cat &animal);

        void    makeSound() const;
};

#endif