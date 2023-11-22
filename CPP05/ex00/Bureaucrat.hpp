/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:30 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/22 15:39:15 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class	Bureaucrat
{
	public:
		Bureaucrat(void); //default constructor
		Bureaucrat(Bureaucrat const & src); //copy constructor
		Bureaucrat & operator=(Bureaucrat const & rhs); //copy assignment operator
		~Bureaucrat(void); //destructor

	protected:
	private:
		std::string const	_name;
		int 				_grade;
};

std::ostream&   operator<<(std::ostream& o, Bureaucrat const & a);

#endif
