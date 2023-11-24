/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/24 15:11:12 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Form Default constructor called" << std::endl;
	return ;
}

Form::Form(Form const & src)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, Form const & a)
{
	return (o);
}
