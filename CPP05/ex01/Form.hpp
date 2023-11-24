/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/24 15:32:27 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class	Form
{
	public:
		Form(std::string name, int toExecute, int toSign);
		Form(Form const & src); //copy constructor
		Form & operator=(Form const & rhs); //copy assignment operator
		~Form(void); //destructor

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade to high")
				}	
		};

	protected:
	private:
		Form(void); //default constructor
		std::string const	_name;
		int const 			_gradeToExecute;
		int const 			_gradeToSign;
		bool				_signed;
		
};

std::ostream&   operator<<(std::ostream& o, Form const & a);

#endif
