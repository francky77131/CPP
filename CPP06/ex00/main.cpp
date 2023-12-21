/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:50:34 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 10:50:35 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter only one argument." << std::endl;
		return (1);
	}
	std::string str = argv[1];

	if (str.length() == 0)
		return (std::cout << "Empty argument" << std::endl, 0);

	ScalarConverter::convert(str);
	return (0);
}