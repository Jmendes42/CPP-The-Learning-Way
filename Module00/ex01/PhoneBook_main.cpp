#include "PhoneBook.class.hpp"

int     main(void)
{
    PhoneBook   book;
    std::string prompt;

    
    while (prompt != "EXIT")
    {
        std::cout << "Please insert ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, prompt);
        if (prompt == "ADD")
            book.set_contact();
        if (prompt == "SEARCH")
            book.set_display();
    }
     return (0);
}
