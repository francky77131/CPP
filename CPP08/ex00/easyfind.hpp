#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <array>
#include <vector>
#include <string>
#include <iostream>

template < typename T >
bool easyfind(T container, int n)
{
    typename T::iterator it;
    typename T::iterator ite = container.end();

    for (it = container.begin(); it != ite; it++)
    {
        if (*it == n)
            return (true);
    }
    return (false);
}

#endif