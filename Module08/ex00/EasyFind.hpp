#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T &container, int find)
{
    typename T::iterator itr;

    itr = std::find(container.begin(), container.end(), find);
    if (itr == container.end() && *itr != find)
        throw(std::exception());
    return (itr);
}

#endif