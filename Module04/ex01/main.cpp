#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int             size = 6;
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const Animal    *array[size];

    for (int x = 0; x < size; x++)
    {
        if (x < size / 2)
            array[x] = new Cat();
        else
            array[x] = new Dog();
    }

    array[5]->makeSound();

    //array[5] = i;

    for (int x = 0; x < size; x++)
        delete array[x];

    delete j;//should not create a leak
    delete i;
    return (0);
}