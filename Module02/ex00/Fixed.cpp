#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &number)
{
    std::cout << "Copy constructor called" << std::endl;
    value = number.getRawBits();
}

Fixed::~Fixed()
{    
        std::cout << "Default destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

void   Fixed::operator = (Fixed &number)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = number.getRawBits();
}