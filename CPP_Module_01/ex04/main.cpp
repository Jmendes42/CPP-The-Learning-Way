#include <iostream>
#include <fstream>

int     main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string name;

    name = argv[1];
    name += ".new";
    if (argc != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return ;
    }
    std::ifstream file (argv[1]);
    if (!file)
    {
        std::cout << "Error: Error oppening file" << std::endl;
        return (1);
    }
    std::ofstream new_file (name);
    if (!new_file)
    {
        std::cout << "Error: Error while creating file" << std::endl;
        return (1);
    }
    


}