#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template<typename T>

class Array
{
    T      *_elements;
    int    _size;

    public:
        Array<T>();
        Array<T>(Array<T> &array);
        Array<T>(unsigned int n);
        ~Array<T>();

        Array<T>    &operator = (Array<T> &array);
        T           &operator [] (int index);

        int         size();
};

//CONSTRUCTORS
template<typename T>
Array<T>::Array()
{
    _elements = new T[1];
    std::cout << "Default Array constructor" << std::endl;
}

template<typename T>
Array<T>::Array(Array<T> &array)
{
    _size = array._size;
    _elements = new T[_size];
    for (int i = 0; i < _size; i++)
        _elements[i] = array._elements[i];
    std::cout << "Copy Array constructor" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _elements = new T[n];
    _size = (int)n;
    for (int i = 0; i < _size; i++)
        _elements[i] = 0;
    std::cout << "Copy Array constructor" << std::endl;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _elements;
    std::cout << "Default Array destructor" << std::endl;
}

//OVERLOADS
template<typename T>
Array<T>   &Array<T>::operator = (Array<T> &array)
{
    if (_elements)
        delete[] _elements;
    _size = array._size;
    _elements = new T[_size];
    for (int i = 0; i < _size; i++)
        _elements[i] = array._elements[i];
    return (*this);
}

template<typename T>
T   &Array<T>::operator [] (int index)
{
    if (index >= _size || index < 0)
        throw(std::exception());
    return (_elements[index]);
}

//GETTERS
template<typename T>
int Array<T>::size()
{
    return _size;
}

#endif