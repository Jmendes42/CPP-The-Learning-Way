#include "Iter.hpp"

int main()
{
    int         intArray[4] = {4, 2, 42, 420};
    char        str[] = "42 is awsome";

    ::iter<int>(intArray, 4, print<int>);
    ::iter<char>(str, 12, print<char>);
}