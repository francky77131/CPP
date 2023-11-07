/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:01 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:00:09 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void); //default constructor
		WrongAnimal(WrongAnimal const & src); //copy constructor
		WrongAnimal & operator=(WrongAnimal const & rhs); //copy assignment operator
		~WrongAnimal(void); //destructor

		void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string _type;
	private:
};

#endif
