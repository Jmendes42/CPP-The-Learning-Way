#include "Span.hpp"

int main()
{
    int     N0 = 10;
    int     N1 = 10000;
    Span    span(N0);
    Span    span1(N1);
    Span    span2(1);

    try
    {
        for (int i = 0; i < N0; i++)
            span.addNumber(i + i);
        span1.addNumber(0, N1);
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span1.longestSpan() << std::endl;
        std::cout << span1.shortestSpan() << std::endl;
        std::cout << span2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    /*Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;*/

    return 0;
}