/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:57 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/06 22:12:24 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	james("James", 132);
	Bureaucrat	jim("Jim", 47);
	Bureaucrat	jack("Jack", 26);
	Bureaucrat	joe("Joe", 5);
	Intern 		someRandomIntern;

	std::cout << std::endl;
	AForm*	s = someRandomIntern.makeForm("Shrubbery creation", "garden");
	std::cout << std::endl;
	AForm*	r = someRandomIntern.makeForm("Robotomy request", "Your neighbour");
	std::cout << std::endl;
	AForm*	p = someRandomIntern.makeForm("Presidential pardon", "John");
	std::cout << std::endl;
	AForm*	wrongForm = someRandomIntern.makeForm("unknowned form", "Nemo");
	std::cout << std::endl;
	delete s;
	delete r;
	delete p;
	(void)wrongForm;
	return (0);
}