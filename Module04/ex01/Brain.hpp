#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.hpp"

class Brain
{
    std::string _ideas[100];
    
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();

        void operator = (const Brain &brain);
};

#endif