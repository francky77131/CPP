/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:50:32 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:09:07 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal(void); //default constructor
		Animal(Animal const & src); //copy constructor
		Animal & operator=(Animal const & rhs); //copy assignment operator
		virtual ~Animal(void); //destructor

		virtual void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string _type;
	private:
};

#endif
