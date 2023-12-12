/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:54:23 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/08 11:54:24 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public:
	RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const & src); //copy constructor
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //copy assignment operator
		~RobotomyRequestForm(void); //destructor

		void execute(Bureaucrat const & executor) const;

	protected:
	private:
		RobotomyRequestForm(void); //default constructor
		std::string	_target;
};

std::ostream&   operator<<(std::ostream& o, RobotomyRequestForm const & a);

#endif
