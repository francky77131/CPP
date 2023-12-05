/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:12 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/05 21:11:50 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int toExecute, int toSign) : _name(name), _gradeToExecute(toExecute), _gradeToSign(toSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooLowException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooHighException();
	else
	{
		std::cout << "Form parametric constructor called" << std::endl;
		_signed = false;
	}
	return ;
}

Form::Form(void) : _name("Random Form"), _gradeToExecute(30), _gradeToSign(30)
{
	std::cout << "Form Default constructor called" << std::endl;
	return ;
}

Form::Form(Form const & src) :  _name(src._name), _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToSign)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = src;
	return ;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() < _gradeToSign)
	{
		_signed = true;
		b.setsign();
	}
	else
		throw GradeTooLowException();
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, Form const & a)
{
	o << a.getName() << ", Form signed need grade " << a.getGradeToSign();
	o << " and for excute it need grade " << a.getGradeToExecute() << ". Signed = " << a.getSigned();
	return (o);
}
