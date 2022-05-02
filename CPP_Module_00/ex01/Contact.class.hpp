#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>

class   Contact
{
    std::string phone_number;
    std::string darkest_secret;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    public:
        void    display(std::string info_type);
        void    set_parameter();
};

#endif