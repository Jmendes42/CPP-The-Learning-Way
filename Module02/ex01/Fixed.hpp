#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    int                 value = 0;
    static const int    bits = 8;

    public:
        Fixed();
        Fixed(Fixed const &number);
        Fixed(int number);
        Fixed(float number);
        ~Fixed();

        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        void    operator = (Fixed number);
        float   toFloat(void) const;
};

std::ostream &operator << (std::ostream &stream, Fixed const &fixed);

#endif