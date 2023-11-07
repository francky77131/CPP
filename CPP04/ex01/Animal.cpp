/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:10 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 13:51:11 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->_type = "Animal";
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "oui" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
