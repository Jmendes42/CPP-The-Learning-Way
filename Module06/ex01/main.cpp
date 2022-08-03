#include "Data.hpp"

int main()
{
    Data    *tester;
    Data    test("Hello, World!");

    std::cout << "----------------------------------" << std::endl;

    test.getStr();
    tester = test.deserialize(test.serialize(&test));
    tester->getStr();

    std::cout << "----------------------------------" << std::endl;

    return 0;
}