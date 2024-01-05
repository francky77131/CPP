/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:02 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 17:17:03 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // std::array<int, 5> arr = {1, 5, 6, 7, 8};

    // if (easyfind(arr, 6))
    //     std::cout << "Found !" << std::endl;
    // else
    //     std::cout << "Don't found ..." << std::endl;
    
    std::vector<int>	arr;

    for (unsigned int i = 0; i < 10; i++)
        arr.push_back(i);

    if (easyfind(arr, 0))
        std::cout << "Found !" << std::endl;
    else
        std::cout << "Don't found ..." << std::endl;
}