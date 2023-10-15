/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:19:03 by frgojard          #+#    #+#             */
/*   Updated: 2023/10/03 14:19:04 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    size_t i;

    i = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (--ac)
    {
        av++;
        i = 0;
        while ((*av)[i])
        {
            (*av)[i] = std::toupper((*av)[i]);
            i++;
        }
        std::cout << *av;
    }
    std::cout << std::endl;
    return (0);
}