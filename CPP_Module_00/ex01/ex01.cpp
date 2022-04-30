#include "PhoneBook.class.hpp"

void    display(PhoneBook& book)
{
    std::cout << "|     Index|First Name|Last Name|  Nickname|" << std::endl;

}

int     main(void)
{
    PhoneBook   book;
    std::string prompt;

    
    while (prompt != "EXIT")
    {
        std::cout << "Please insert ADD, SEARCH or EXIT" << std::endl;
        std::cin >> prompt;
        if (prompt == "ADD")
            book.set_contact();
        if (prompt == "SEARCH")
            book.set_display();
    }
     return (0);
}
