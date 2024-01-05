/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:53 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 16:03:43 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
    int tab[3] = {1, 2, 3};
    iter(tab, 3, print);

    std::string tab1[] = {
        "coucou",
        "ca va",
        "oui",
    };
    iter(tab1, 2, print);
    return 0;
}