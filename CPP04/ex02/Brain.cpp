/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:53:09 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 10:40:19 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)	
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

void	Brain::set_ideas(void)
{

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			_ideas[i] = "Eat !";
		else
			_ideas[i] = "Sleep !";
	}
}

void	Brain::set_ideas(std::string idea)
{
	for(int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

std::string		Brain::get_ideas(int array)
{
	return (this->_ideas[array]);
}
