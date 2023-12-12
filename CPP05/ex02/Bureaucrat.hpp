/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:30 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/08 11:58:52 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	public:
		Bureaucrat(void); //default constructor
		Bureaucrat(std::string name, int grade); //parametric constructor
		Bureaucrat(Bureaucrat const & src); //copy constructor
		Bureaucrat & operator=(Bureaucrat const & rhs); //copy assignment operator
		~Bureaucrat(void); //destructor

		
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(AForm const & f);
		void		executeForm(AForm const & form);
		
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
};

std::ostream&   operator<<(std::ostream& o, Bureaucrat const & a);

#endif
