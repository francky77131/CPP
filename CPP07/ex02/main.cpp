/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:38 by frgojard          #+#    #+#             */
/*   Updated: 2024/01/05 15:59:56 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	/*Test tab vide*/

	// Array<int> arr;
	// int size;

	// size = arr.size();
	// std::cout << "Size arr = " <<  size << std::endl;
	// try
	// {
	// 	std::cout << arr[0] << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	/*Test tab rempli*/
	Array<int> arr(20);
	int size;

	size = arr.size();
	arr.fill();
	arr.print();
	std::cout << "Size arr = " <<  size << std::endl;
	try
	{
		std::cout << arr[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
