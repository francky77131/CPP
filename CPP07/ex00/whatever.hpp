/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:56:04 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 15:56:05 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template < typename T >
void swap(T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template < typename T >
T const & min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template < typename T >
T const & max(T const & a, T const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
