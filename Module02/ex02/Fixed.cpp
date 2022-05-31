#include "Fixed.hpp"

//CONSTRUCTORS---------------------------

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &number) 
{
    //std::cout << "Copy constructor called" << std::endl;
    value = number.getRawBits();
}

Fixed::Fixed(int number)
{
    //std::cout << "Int constructor called" << std::endl;
    value = number * (1 << bits);
}

Fixed::Fixed(float number)
{
    //std::cout << "Float constructor called" << std::endl;
    value = (int)(roundf(number * (1 << bits)));
}

Fixed::~Fixed()
{    
        //std::cout << "Default destructor called" << std::endl;
}

//SETERS GETERS--------------------------------------

int     Fixed::getRawBits(void) const
{
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
    //std::cout << "setRawBits member function called" << std::endl;
}

//CONVERTERS----------------------------------------

float Fixed::toFloat(void) const
{
    return((float) ((value / (float)(1 << bits))));
}

int     Fixed::toInt(void) const
{
        return (value >> bits);
}

//COMPARISONS-----------------------------------------------------

void   Fixed::operator = (Fixed &number)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    value = number.getRawBits();
}

bool    Fixed::operator < (Fixed const &number) const
{
    return (value < number.value);
}

bool    Fixed::operator > (Fixed const &number) const
{
    return (value > number.value);
}

bool    Fixed::operator >= (Fixed const &number) const
{
    return (value >= number.value);
}

bool    Fixed::operator <= (Fixed const &number) const
{
    return (value <= number.value);
}

bool    Fixed::operator != (Fixed const &number) const
{
    return (value != number.value);
}

bool    Fixed::operator == (Fixed const &number) const
{
    return (value == number.value);
}

Fixed   Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else
        return (0);
}

Fixed   Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    else if (b > a)
        return (b);
    else
        return (0);
}

//ARITHEMETIC-------------------------------------------

Fixed    Fixed::operator + (Fixed number)
{
    Fixed temp(toFloat() + number.toFloat());

    return (temp);
}

Fixed    Fixed::operator - (Fixed number)
{
    Fixed temp(toFloat() - number.toFloat());

    return (temp);
}

Fixed    Fixed::operator * (Fixed number)
{
    Fixed temp(toFloat() * number.toFloat());

    return (temp);
}

Fixed    Fixed::operator / (Fixed number)
{
    Fixed temp(toFloat() / number.toFloat());

    return (temp);
}

Fixed    Fixed::operator ++ ()
{
    Fixed temp;

    temp.value = ++value;
    return (temp);
}

Fixed    Fixed::operator ++ (int)
{
    Fixed temp;

    temp.value = value++;
    return (temp);
}

//OSTREAM-----------------------------------------------------------

std::ostream &operator << (std::ostream &COUT, Fixed const &number)
{
	COUT << number.toFloat();
	return (COUT);
}