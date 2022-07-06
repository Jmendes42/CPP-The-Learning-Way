#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"


class Cat: public Animal
{
    Brain *_brain;

    public:
        Cat();
        Cat(const Cat &cat);
        ~Cat();
        void    operator = (const Cat &animal);

        void    makeSound() const;
};

#endif