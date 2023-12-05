/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:57 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/05 21:12:13 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Form		test("Testing", 80, 120);
	Bureaucrat	nop("Bob", 70);
	Bureaucrat  yep("DD", 100);

	try
	{
	nop.signForm(test);
	std::cout << test << std::endl;
	test.beSigned(nop);
	std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << yep << std::endl;
	yep.signForm(test);
	return (0);
}