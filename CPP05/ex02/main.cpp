/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:57 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/06 20:33:06 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	S("Shrub");
	RobotomyRequestForm		R("Robot");
	PresidentialPardonForm	P("President");
	Bureaucrat				nop("Bob", 2);
	std::cout << std::endl;
	std::cout << S << std::endl;
	std::cout << std::endl;
	std::cout << R << std::endl;
	std::cout << std::endl;
	std::cout << P << std::endl;
	std::cout << std::endl;
	std::cout << nop << std::endl;

	try
	{
		S.beSigned(nop);
		R.beSigned(nop);
		P.beSigned(nop);
		S.execute(nop);
		std::cout << std::endl;
		R.execute(nop);
		std::cout << std::endl;
		P.execute(nop);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}