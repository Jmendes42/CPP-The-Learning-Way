#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <cstdlib>
#include <string>

class Convert
{
    std::string _str;
    int         _type;
    double      _number;

    public:
        Convert();
        Convert(char *argv);
        ~Convert();

        void    operator = (Convert conv);

        void    detect(char *argv);
        void    convertInt();
        void    convertChar();
        void    convertFloat();
        void    convertDouble();
};

#endif