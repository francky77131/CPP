/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:35 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/12 15:48:32 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <stdint.h>


typedef struct s_data
{
	int i;
} Data;

class	Serialize
{
	public:
		Serialize(void); //default constructor
		Serialize(Serialize const & src); //copy constructor
		Serialize & operator=(Serialize const & rhs); //copy assignment operator
		~Serialize(void); //destructor

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

	protected:
	private:
};

#endif
