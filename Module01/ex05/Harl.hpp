#ifndef HARL_H
# define HARL_H

# include <iostream>

/*typedef to define a type

typedef   void      (*FunctionFunc)  ( );
             ^                ^         ^
        return type      type name  arguments*/

class Harl
{
    void            debug(void);
    void            info(void);
    void            warning(void);
    void            error(void);
    typedef void    (Harl::*function)(void);
    function         type[4];
    public:
        Harl();
        void    complain(std::string level);
};

#endif