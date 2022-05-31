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
        void    operator = (Fixed &number);
        Fixed    operator + (Fixed number);
        Fixed    operator - (Fixed number);
        Fixed   operator * (Fixed number);
        Fixed   operator / (Fixed number);
        Fixed   operator ++ (void);
        Fixed   operator ++ (int number);
        static Fixed   min(Fixed const &a, Fixed const &b);
        static Fixed   max(Fixed const &a, Fixed const &b);
        bool    operator < (Fixed const &number) const;
        bool    operator > (Fixed const &number) const;
        bool    operator >= (Fixed const &number) const;
        bool    operator <= (Fixed const &number) const;
        bool    operator != (Fixed const &number) const;
        bool    operator == (Fixed const &number) const;

        float   toFloat(void) const;
};

std::ostream &operator << (std::ostream &stream, Fixed const &fixed);

#endif 