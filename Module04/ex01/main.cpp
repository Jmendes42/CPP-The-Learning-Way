#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const   Animal      *j = new Dog();
    const   Animal      *i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << "--------------------" << std::endl;

    int     size = 4;
    const   Animal      *array[size];

    for (int i = 0; i < size / 2; i++)
        array[i] = new Cat();
    
    for (int i = (size / 2); i < size; i++)
        array[i] = new Dog();

    for(int i = 0; i < size; i++)
        delete array[i];

    std::cout << "--------------------" << std::endl;

    Dog basic;
    {
        Dog dog = basic;
    }

    std::cout << "--------------------" << std::endl;

    return (0);
}