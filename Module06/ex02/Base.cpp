#include "Base.hpp"

//CONSTRUCTORS
Base::~Base()
{
    std::cout << "Default Base destructor" << std::endl;
}

Base    *generate(void)
{
    int     number;
    Base    *ptr;

    srand(time(NULL));
    number = rand()%3;
    if (number % 3 == 0)
    {
        std::cout << "Created Base A" << std::endl;
        return ptr = new A();
    }
    else if (number % 2 == 0)
    {
        std::cout << "Created Base B" << std::endl;
        return ptr = new B();
    }
    else
    { 
        std::cout << "Created Base C" << std::endl;
        return ptr = new C();
    }
}

void    identify(Base *p)
{
    A   *testA = dynamic_cast<A*>(p);
    if (testA != NULL)
        std::cout << "Pointer type Base A" << std::endl;
    B   *testB = dynamic_cast<B*>(p);
    if (testB != NULL)
        std::cout << "Pointer type Base B" << std::endl;
    C   *testC = dynamic_cast<C*>(p);
    if (testC != NULL)
        std::cout << "Pointer type Base C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Reference type Base A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Reference type Base B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Reference type Base C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
        
    }
    
}