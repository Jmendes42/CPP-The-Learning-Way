#include <iostream>
#include <fstream>
#include <string>


void    replacer(std::ifstream &old_file, std::ofstream &new_file, char *s_1, char *s_2)
{
    std::string s1;
    std::string s2;
    std::string str;
    std::string line;
    int         pos, start;

    s1 = s_1;
    s2 = s_2;
    start = 0;
    while (std::getline(old_file, line))
    {
        while ((pos = line.find(s1, start)) >= 0)
        {
            //std::cout << "########" << pos << std::endl;
            str += line.substr(start, pos - start);
            str += s2;
            start = pos + s1.length();
        }
        str += line.substr(start, pos - start);
        if (str.empty())
            new_file << line;
        else    
            new_file << str;
        start = 0;
        pos = 0;
        str = "";
        if (!old_file.eof())
            new_file << std::endl;
    }
    return ;

}

int     main(int argc, char **argv)
{
    std::string f_name;

    if (argc != 4)
    {
        std::cout << "Error: Wrong arguments" << std::endl;
        return (1);
    }
    f_name = argv[1];
    f_name += ".new";
    std::ifstream old_file (argv[1]);
    if (!old_file)
    {
        std::cout << "Error: While opening old file" << std::endl;
        return (1);
    }
    std::ofstream new_file (f_name);
    if (!new_file)
    {
        std::cout << "Error: while creating new_file" << std::endl;
        return (1);
    }
    replacer(old_file, new_file, argv[2], argv[3]);
    return (0);
}