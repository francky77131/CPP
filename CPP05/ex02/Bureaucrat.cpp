/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:31 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/06 20:33:47 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Random"), _grade(1)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Parametric constructor called" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade -= 1;
	return ;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade += 1;
	return ;
}

void	Bureaucrat::signForm(AForm const & f)
{
	if (f.getSigned() == true)
		std::cout << _name << " signed " << f.getName() << std::endl;
	else if ((f.getSigned() == false) || f.getGradeToSign() < getGrade())
		std::cout << _name << " couldn't signed " << f.getName() << " because grade to low" << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, Bureaucrat const & a)
{
	o << a.getName();
	o << " grade " << a.getGrade() << std::endl;
	return (o);
}
