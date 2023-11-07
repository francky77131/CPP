/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:50:42 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 13:50:43 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void); //default constructor
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		~Cat(void); //destructor

		void		makeSound(void) const;


	protected:
	private:
};

#endif
