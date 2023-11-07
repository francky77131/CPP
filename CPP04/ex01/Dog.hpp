/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:34 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:40:11 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog(void); //default constructor
		Dog(Dog const & src); //copy constructor
		Dog & operator=(Dog const & rhs); //copy assignment operator
		~Dog(void); //destructor

		void	makeSound(void) const;
		Brain*	get_brain(void) const;

	private:
		Brain	*_braindog;
};

#endif
