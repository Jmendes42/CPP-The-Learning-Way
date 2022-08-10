#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template<class Stack>
class MutantStack: public std::stack<Stack>
{
    //std::stack<Stack>
    public:
        typedef typename std::stack<Stack>::container_type::iterator iterator;

        MutantStack();
        MutantStack(MutantStack &mutant);
        ~MutantStack();

        void        swap(MutantStack<Stack> &mutant);

        iterator    begin();
        iterator    end();
        /*void    top();
        void    pop();
        void    size();
        void    push(int i);*/
};

template<class Stack>
MutantStack<Stack>::MutantStack()
{
    std::cout << "Default Mutant constructor" << std::endl;
}

template<class Stack>
MutantStack<Stack>::MutantStack(MutantStack &mutant)
{
    *this = mutant;
    std::cout << "Copy Mutant constructor" << std::endl;
}

template<class Stack>
MutantStack<Stack>::~MutantStack()
{
    std::cout << "Default Mutant constructor" << std::endl;
}

template<class Stack>
typename    MutantStack<Stack>::iterator MutantStack<Stack>::begin()
{
    return this->c.begin();
}

template<class Stack>
typename    MutantStack<Stack>::iterator MutantStack<Stack>::end()
{
    return this->c.end();
}

template<class Stack>
void MutantStack<Stack>::swap(MutantStack<Stack> &mutant)
{
    MutantStack<Stack> temp;
    while (this->size() > 0)
    {
        temp.push(this->top());
        this->pop();
    }
    
    while (mutant.size() > 0)
    {
        this->push(mutant.top());
        mutant.pop();
    }
    
    
    while (temp.size() > 0)
    {
        mutant.push(temp.top());
        temp.pop();
    }
}

#endif