/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:07 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 13:51:08 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void); //default constructor
		WrongCat(WrongCat const & src); //copy constructor
		WrongCat & operator=(WrongCat const & rhs); //copy assignment operator
		~WrongCat(void); //destructor

		void		makeSound(void) const;


	protected:
	private:
};

#endif
