#ifndef DAtA_H
#define DAtA_H

#include <iostream>
#include <stdint.h>

class Data
{
    std::string _str;

    public:
        Data();
        Data(std::string str);
        ~Data();

        Data        operator = (Data raw);

        uintptr_t   serialize(Data *ptr);
        Data        *deserialize(uintptr_t raw);

        void        getStr();
};

#endif