/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:28 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:14:15 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void); //default constructor
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		~Cat(void); //destructor

		void		makeSound(void) const;
		Brain*	get_brain(void) const;

	private:
		Brain	*_braincat;
};

#endif
