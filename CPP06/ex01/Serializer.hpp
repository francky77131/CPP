/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:35 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 10:50:56 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>


typedef struct s_data
{
	int i;
} Data;

class	Serializer
{
	public:
		Serializer(Serializer const & src); //copy constructor
		Serializer & operator=(Serializer const & rhs); //copy assignment operator
		~Serializer(void); //destructor

		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);

	protected:
		Serializer(void); //default constructor
	private:
};

#endif
