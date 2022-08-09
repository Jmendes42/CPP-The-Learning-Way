#include "Span.hpp"

//CONSTRUCOTRS
Span::Span()
{
    std::cout << "Default Span constructor" << std::endl;
}

Span::Span(unsigned int N)
{
    _N = N;
    std::cout << "Copy Span constructor" << std::endl;
}

Span::~Span()
{
    std::cout << "Default Span destructor" << std::endl;
}

//METHODS
void    Span::addNumber(int n)
{
    if (_vec42.size() > _N)
        throw (std::exception());
    _vec42.push_back(n);
}

void    Span::addNumber(int min, int max)
{
    int n = 0;

    for (int i = min; i < max; i++)
    {
        n++;
        if (n > (int)_N)
            throw (std::exception());
        _vec42.push_back(i);
    }
}

int     Span::shortestSpan()
{
    int                         min;
    int                         dif;
    std::vector<int>            vec42;
    std::vector<int>::iterator  itrMin;
    
    vec42 = _vec42;
    dif = this->longestSpan();
    while (vec42.size() > 1)
    {
        itrMin = std::min_element(vec42.begin(), vec42.end());
        min = *itrMin;
        vec42.erase(itrMin);
        itrMin = std::min_element(vec42.begin(), vec42.end());
        if (*itrMin - min < dif)
            dif = *itrMin - min;

    }
    return dif;
}

int     Span::longestSpan()
{
    std::vector<int>::iterator itrMin;
    std::vector<int>::iterator itrMax;

    if (_N < 2)
        throw (std::exception());
    itrMin = std::min_element(_vec42.begin(), _vec42.end());
    itrMax = std::max_element(_vec42.begin(), _vec42.end());

    return *itrMax - *itrMin;
}

//OPERATORS
Span    &Span::operator = (Span &span)
{
    _N = span._N;
    _vec42.clear();
    for (int i = 0; i < (int)_N; i++)
        _vec42.push_back(span._vec42[i]);
    return *this;
}