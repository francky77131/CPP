/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:44:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 14:17:58 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adress of str : " << &str << std::endl;
	std::cout << "Adresse of stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress of stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value str : " << str << std::endl;
	std::cout << "Value stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value stringREF : " << stringREF << std::endl;
	return (0);
}