/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/05 21:05:33 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		AForm(std::string name, int toExecute, int toSign);
		AForm(AForm const & src); //copy constructor
		AForm & operator=(AForm const & rhs); //copy assignment operator
		virtual ~AForm(void); //destructor

		std::string	getName(void) const;
		int 	getGradeToSign(void) const;
		int 	getGradeToExecute(void) const;
		bool	getSigned(void) const;
		void	beSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("AForm Grade to high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("AForm Grade to low");
				}
		};
		class CannotExecute : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Form cannot be execute");
				}
		};

	protected:
		AForm(void); //default constructor
		std::string const	_name;
		int const 			_gradeToExecute;
		int const 			_gradeToSign;
		bool				_signed;
		
};

std::ostream&   operator<<(std::ostream& o, AForm const & a);

#endif
