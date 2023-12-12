/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:35 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/12 15:34:56 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(void)
{
	std::cout << "Serialize Default constructor called" << std::endl;
	return ;
}

Serialize::Serialize(Serialize const & src)
{
	std::cout << "Serialize Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Serialize & Serialize::operator=(Serialize const & rhs)
{
	std::cout << "Serialize Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serialize::~Serialize(void)
{
	std::cout << "Serialize Destructor called" << std::endl;
	return ;
}
