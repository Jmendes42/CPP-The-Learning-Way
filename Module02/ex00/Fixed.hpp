#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    int                 value = 0;
    static const int    bits = 8;

    public:
        Fixed();
        Fixed(Fixed &number);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        void    operator = (Fixed &number);
};

#endif