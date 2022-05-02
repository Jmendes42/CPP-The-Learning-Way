#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook
{
    
    int     stands;
    Contact contacts[8];
    public:
        void    set_display();
        void    set_contact();  
};

#endif