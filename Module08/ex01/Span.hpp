#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <iterator>
#include <exception>
#include <algorithm>

class Span
{
    unsigned int        _N;
    std::vector<int>    _vec42;

    public:
        Span();
        Span(unsigned int N);
        ~Span();

        Span    &operator = (Span &span);

        void    addNumber(int n);
        void    addNumber(int min, int max);

        int     shortestSpan();
        int     longestSpan();
};

#endif