/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:50:45 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 11:29:22 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		test = {42};

	uintptr_t	ser = Serializer::serialize(&test);
	std::cout << "Serialized adress : " << ser << std::endl;

	Data*		test2 = Serializer::deserialize(ser);
	std::cout << "Deserialised value : " << test2->i << std::endl;
	return (0);
}