#include "Harl.hpp"

int main(void)
{
    Harl        harl;
    std::string answer;

    while (answer != "5")
    {
        std::cout << "What should Harl do:\n1 - Debug\n2 - Info\n3 - Warning\n4 - Error\n5 - Exit" << std::endl;
        std::cin >> answer;
        if (answer == "1")
            harl.complain("debug");
        if (answer == "2")
            harl.complain("info");
        if (answer == "3")
            harl.complain("warning");
        if (answer == "4")
            harl.complain("error");
    }
    return (0);
}