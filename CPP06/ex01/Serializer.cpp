/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:35 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/19 11:48:19 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer Default constructor called" << std::endl;
	return ;
}

Serializer::Serializer(Serializer const & src)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer::~Serializer(void)
{
	std::cout << "Serialize Destructor called" << std::endl;
	return ;
}
