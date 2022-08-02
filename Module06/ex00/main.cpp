#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 0;
    }
    Convert convert(argv[1]);
}