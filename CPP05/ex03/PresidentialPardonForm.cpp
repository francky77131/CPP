/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:54:15 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/08 11:54:16 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 5, 25), _target(target)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false || executor.getGrade() > this->_gradeToExecute)
		throw CannotExecute();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, PresidentialPardonForm const & a)
{
	o << a.getName() << ", AForm Presidential signed need grade " << a.getGradeToSign();
	o << " and for excute it need grade " << a.getGradeToExecute() << ". Signed = " << a.getSigned();
	return (o);
}
