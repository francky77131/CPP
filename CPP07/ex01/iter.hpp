/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:51 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 15:55:52 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template < typename T >
void iter(T *tab, int len, void (*f)(T const &))
{
    for (int i = 0; i < len; i++)
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
