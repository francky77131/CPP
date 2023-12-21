#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template < typename T >
void iter(T *tab, int len, void (*f)(T))
{
    for (int i = 0; i <= len; i++)
    {
        f(tab[i]);
    }
}

template < typename T >
void iter(T *tab, int len, void (*f)(T const &)) //demander a quelqu'un pourquoi faire ca.
{
    for (int i = 0; i <= len; i++)
    {
        f(tab[i]);
    }
}

template < typename T >
void print(T const a)
{
    std::cout << a << std::endl;
}

#endif
