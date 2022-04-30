#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook
{
    
    int     stands;
    Contact contacts[8];
    public:
        void    set_display()
        {
            std::cout << "     Index|First Name|Last Name|  Nickname" << std::endl;
            for (int i = 0; i < stands; i++)
            {
                std::cout << std::setfill(' ') << std::setw(10);
                std::cout << i << '|';
                contacts[i].display("name");
                
            }
            int index;

            std::cout << "Choose Index:" << std::endl;
            std::cin >> index;
            contacts[index].display("info");
        }
        void    set_contact()
        {
            int i;
            if (!stands)
                stands = 0;
            if (stands < 8)
                i = stands;
            else
                i = stands % 8;
            contacts[i].set_parameter();
            stands++;
        }
};

#endif