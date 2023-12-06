/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/05 21:11:50 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int toExecute, int toSign) : _name(name), _gradeToExecute(toExecute), _gradeToSign(toSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooLowException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooHighException();
	else
	{
		std::cout << "AForm parametric constructor called" << std::endl;
		_signed = false;
	}
	return ;
}

AForm::AForm(void) : _name("Random AForm"), _gradeToExecute(30), _gradeToSign(30)
{
	std::cout << "AForm Default constructor called" << std::endl;
	return ;
}

AForm::AForm(AForm const & src) :  _name(src._name), _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToSign)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

int AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() < _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, AForm const & a)
{
	o << a.getName() << ", AForm signed need grade " << a.getGradeToSign();
	o << " and for excute it need grade " << a.getGradeToExecute() << ". Signed = " << a.getSigned();
	return (o);
}
