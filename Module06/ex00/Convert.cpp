#include "Convert.hpp"

//CONSTRUCTORS
Convert::Convert()
{
    std::cout << "Default Convert constructor" << std::endl;
}

Convert::Convert(char *argv)
{
    _type = 0;
    detect(argv);
    std::cout << "Default Convert constructor" << std::endl;
    convertChar();
    convertInt();
    convertFloat();
    convertDouble();
}

Convert::~Convert()
{
    std::cout << "Standart Convert destructor" << std::endl;
}

//METHODS
void    Convert::detect(char *argv)
{
    _str = static_cast<std::string>(argv);
    if (_str.length() == 1)
    {
        if (_str[0] >= 48 && _str[0] <= 57)
            _number = _str[0] -= 48;
        else    
            _number = static_cast<double>(_str[0]);
    }
    else if(!_str.compare("-inf") || !_str.compare("-inff"))
        _type = 1;
    else if(!_str.compare("+inf") || !_str.compare("+inff"))
        _type = 2;
    else if(!_str.compare("nan") || !_str.compare("nanf"))
        _type = 3;
    else
        _number = strtod(argv, NULL);
}

void    Convert::convertChar()
{
    if (_type > 0 || _number < 0 || _number > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (_number >= 0 && _number <= 31)
        std::cout << "Char: Non Displayble" << std::endl;
    else
    {
        char c = static_cast<char>(_number);
        std::cout << "Char: " << c << std::endl;
    }
}

void    Convert::convertInt()
{
    if (_type > 0)
        std::cout << "Int: Impossible" << std::endl;
    else 
    {
        int i = static_cast<int>(_number);
        std::cout << "Int: " << i << std::endl;
    }
    
}

void    Convert::convertFloat()
{
    if (_type == 1)
        std::cout << "Float: -inff" << std::endl;
    else if (_type == 2)
        std::cout << "Float: +inff" << std::endl;
    else if (_type == 3)
        std::cout << "Float: nanf" << std::endl;
    else
    {
        float f = static_cast<float>(_number);
        std::cout << "Float: " << f << "f" << std::endl;
    }
}

void    Convert::convertDouble()
{
    if (_type == 1)
        std::cout << "Double: -inf" << std::endl;
    else if (_type == 2)
        std::cout << "Double: +inf" << std::endl;
    else if (_type == 3)
        std::cout << "Double: nan" << std::endl;
    else
        std::cout << "Double: " << _number << std::endl;
}