#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template<typename T>
void    iter(T *array, int length, void(*function)(T &))
{
    for (int i = 0; i < length; i++)
        (*function)(array[i]);
}

template<typename T>
void    print(T &p)
{
    std::cout << p << std::endl;
}
#endif