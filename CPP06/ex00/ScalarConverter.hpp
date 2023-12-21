/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:50:42 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 10:50:43 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <vector>

class	ScalarConverter
{
	public:
		ScalarConverter(ScalarConverter const & src); //copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); //copy assignment operator
		~ScalarConverter(void); //destructor

		static void		convert(std::string str);
		static bool		isChar(std::string str);
		static bool		isInt(std::string str);
		static bool		isFloat(std::string str);
		static bool		isDouble(std::string str);
	private:
		ScalarConverter(void); //default constructor

};

std::ostream&   operator<<(std::ostream& o, ScalarConverter const & a);

#endif