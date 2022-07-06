#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int     size = 4;
    const   Animal      *j = new Dog();
    const   Animal      *i = new Cat();
    const   Animal      *array[size];

    array[0] = new Cat();
    array[1] = new Cat();
    array[2] = new Dog();
    array[3] = new Dog();

    array[0] = array[1];

    for(int x = 0; x < 3; x++)
        delete array[x];

    delete j;//should not create a leak
    delete i;

    return (0);
}