/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:54:20 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/12 17:42:24 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 45, 72), _target(target)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false || executor.getGrade() > this->_gradeToExecute)
		throw CannotExecute();
	// Utilisez time(nullptr) comme graine pour le générateur de nombres aléatoires
    std::srand((unsigned) time(NULL));
    // Générez un nombre aléatoire
    int randomValue = std::rand();
	if (randomValue % 2 == 0)
		std::cout << _target << " request failed." << std::endl;
	else
		std::cout << "*GRRZZ* " << _target << " successfully robotomized " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, RobotomyRequestForm const & a)
{
	o << a.getName() << ", AForm Robotomy signed need grade " << a.getGradeToSign();
	o << " and for excute it need grade " << a.getGradeToExecute() << ". Signed = " << a.getSigned();
	return (o);
}
