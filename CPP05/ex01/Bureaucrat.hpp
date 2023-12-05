/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:30 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/05 21:04:09 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	public:
		Bureaucrat(void); //default constructor
		Bureaucrat(std::string name, int grade); //parametric constructor
		Bureaucrat(Bureaucrat const & src); //copy constructor
		Bureaucrat & operator=(Bureaucrat const & rhs); //copy assignment operator
		~Bureaucrat(void); //destructor

		
		int	getGrade(void) const;
		std::string	getName(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form const & f);
		void 	setsign(void);
		
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat Grade to high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat Grade to low");
				}
		};

	private:
		std::string const	_name;
		int 				_grade;
		bool				_itsign;
};

std::ostream&   operator<<(std::ostream& o, Bureaucrat const & a);

#endif
