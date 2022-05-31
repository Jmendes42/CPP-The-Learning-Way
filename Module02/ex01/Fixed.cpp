#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}




Fixed::Fixed(Fixed const &number) 
{
    std::cout << "Copy constructor called" << std::endl;
    value = number.getRawBits();
}




Fixed::Fixed(int number)
{
    std::cout << "Int constructor called" << std::endl;
    value = number * (1 << bits);
}

Fixed::Fixed(float number)
{
    std::cout << "Float constructor called" << std::endl;
    value = (int)(roundf(number * (1 << bits)));
}

Fixed::~Fixed()
{    
        std::cout << "Default destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

void   Fixed::operator = (Fixed number)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = number.getRawBits();
}

float Fixed::toFloat(void) const
{
    return((float) ((value / (float)(1 << bits))));
}

int     Fixed::toInt(void) const
{
        return (value >> bits);
}

std::ostream &operator << (std::ostream &COUT, Fixed const &number)
{
	COUT << number.toFloat();
	return (COUT);
}