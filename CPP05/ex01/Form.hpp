/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/08 11:57:55 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(std::string name, int toExecute, int toSign);
		Form(Form const & src); //copy constructor
		Form & operator=(Form const & rhs); //copy assignment operator
		~Form(void); //destructor

		std::string	getName(void) const;
		int 		getGradeToSign(void) const;
		int 		getGradeToExecute(void) const;
		bool		getSigned(void) const;
		void		beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Form Grade to high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Form Grade to low");
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
