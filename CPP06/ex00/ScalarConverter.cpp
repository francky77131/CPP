/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:50:40 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 10:50:41 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
	return ;
}

bool	ScalarConverter::isChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "This is a char: '" << str << "'" << std::endl;
		char 	c = str[0];

		std::cout << std::fixed;
		if (c < 32)
			std::cout << "char   : Non displayable" << std::endl;
		else
			std::cout << "char   : " << c << std::endl;
		std::cout << "int    : " << static_cast<int>(c) << std::endl;
		std::cout << "float  : " << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;

		return (true);
	}
	else
		return (false);
 }

bool	ScalarConverter::isInt(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i])  && !(i == 0 && str[i] == '-'))
			return (false);
	}	
	std::cout << "This is an int: '" << str << "'" << std::endl;
	if (str.length() > 11 || strtol(str.c_str(), NULL, 10) > std::numeric_limits<int>::max()
			|| strtol(str.c_str(), NULL, 10) < std::numeric_limits<int>::min())
	{
		std::cout << "char   : Not in char range" << std::endl;
		std::cout << "int    : Int overflow" << std::endl;
		std::cout << "float  : Int overflow" << std::endl;
		std::cout << "double : Int overflow" << std::endl;
		return (true);
	}
	else
	{
			int	i = atoi(str.c_str());
			std::cout << std::fixed;
		if (i > 127 || i < 0)
			std::cout << "char   : Not in char range" << std::endl;
		else if (i < 32)
			std::cout << "char   : Not displayable" << std::endl;
		else
			std::cout << "char   : " << static_cast<char>(i) << std::endl;
		std::cout << "int    : " << i << std::endl;
		std::cout << "float  : " << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(i) << std::endl;
		return (true);
	}
}

bool	ScalarConverter::isFloat(std::string str)
{
	if (str[str.length() - 1] != 'f')
		return (false);
	else if (str == "nanf" || str == "-inff" || str == "+inff")
	{
		std::cout << "This is a float: '" << str << "'" << std::endl;
		float	f = atof(str.c_str());
		std::cout << "char   : Impossible" << std::endl;
		std::cout << "int    : Impossible" << std::endl;
		std::cout << "float  : " << f << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
		return (true);
	}
	else
	{
		size_t	i = 0;
		int		dec = 0;
		for (;i < str.length() - 1; i++)
		{
			if (!isdigit(str[i]) && !(i == 0 && str[i] == '-'))
					break ;
		}
		if (str[i] == '.')
			i++;
		else
			return (false);
		for (; i < str.length() - 1; i++)
		{
			dec++;
			if (!isdigit(str[i]))
				return (false);
		}
		std::cout << "This is a float: '" << str << "'" << std::endl;
		float	f = atof(str.c_str());
		std::cout << std::fixed;
		if (f > 127 || f < 0)
			std::cout << "char   : Not in char range" << std::endl;
		else if (f < 32)
			std::cout << "char   : Not displayable" << std::endl;
		else
			std::cout << "char   : " << static_cast<char>(f) << std::endl;
		std::cout << "int    : " << static_cast<int>(f) << std::endl;
		std::cout << "float  : " << std::setprecision(dec) << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
		return (true);
	}
}

bool	ScalarConverter::isDouble(std::string str)
{
	if (str == "nan" || str == "-inf" || str == "+inf")
	{
		std::cout << "This is a double '" << str << "'" << std::endl;
		double	d = atof(str.c_str());
		std::cout << "char   : Impossible" << std::endl;
		std::cout << "int    : Impossible " << std::endl;
		std::cout << "float  : " << static_cast<float>(d) << std::endl;
		std::cout << "double : " << d << std::endl;
		return (true);
	}
	else
	{
		size_t	i = 0;
		int		dec = 0;
		for (;i < str.length(); i++)
		{
			if (!isdigit(str[i]) && !(i == 0 && str[i] == '-'))
					break ;
		}
		if (str[i] == '.')
			i++;
		else
			return (false);
		for (; i < str.length(); i++)
		{
			dec++;
			if (!isdigit(str[i]))
				return (false);
		}
		std::cout << "This is a double: '" << str << "'" << std::endl;
		float	d = atof(str.c_str());
		std::cout << std::fixed;
		if (d > 127 || d < 0)
			std::cout << "char   : Not in char range" << std::endl;
		else if (d < 32)
			std::cout << "char   : Not displayable" << std::endl;
		else
			std::cout << "char   : " << static_cast<char>(d) << std::endl;
		std::cout << "int    : " << static_cast<int>(d) << std::endl;
		std::cout << "float  : " << std::setprecision(dec) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
		return (true);

	}
}

void	ScalarConverter::convert(std::string str)
{
	bool	(*checking[])(std::string) = 
	{
		&ScalarConverter::isChar,
		&ScalarConverter::isInt,
		&ScalarConverter::isFloat,
		&ScalarConverter::isDouble
	};
	bool	found = false;
	for (int i = 0; i < 4; i++)
	{
		if (checking[i](str))
		{
			found = true;
			break;
		}
	}
	if (!found)
		std::cout << "Please enter char, int, float or double." << std::endl;
}