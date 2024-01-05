/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:05 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 17:17:06 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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