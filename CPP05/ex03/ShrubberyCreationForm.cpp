/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:54:26 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/08 11:54:27 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 137, 145), _target(target)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false || executor.getGrade() > this->_gradeToExecute)
		throw CannotExecute();
	else
	{
		std::string		filename = _target + "_shrubbery";
		std::ofstream	form(filename.c_str());
		
	form << "              * *                         * *           " << std::endl;
    form << "           *    *  *                   *    *  *        " << std::endl;
    form << "      *  *    *     *  *          *  *    *     *  *    " << std::endl;
    form << "     *     *    *  *    *        *     *    *  *    *   " << std::endl;
    form << " * *   *    *    *    *   *  * *   *    *    *    *   * " << std::endl;
    form << " *     *  *    * * .#  *   * *     *  *    * * .#  *   *" << std::endl;
    form << " *   *     * #.  .# *   *    *   *     * #.  .# *   *   " << std::endl;
    form << "  *    \"#.  #: #\" * *   *   *    \"#.  #: #\" * *   * " << std::endl;
    form << " *   * *\"#. ##\"      *     *   * *\"#. ##\"      *    " << std::endl;
    form << "   *      \"###                *      \"###             " << std::endl;
    form << "            \"##                        \"##            " << std::endl;
    form << "              ##.                         ##.           " << std::endl;
    form << "              .##:                        .##:          " << std::endl;
    form << "              :###                        :###          " << std::endl;
    form << "              ;###                        ;###          " << std::endl;
    form << "            ,####.                      ,####.          " << std::endl;
    form.close();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, ShrubberyCreationForm const & a)
{
	o << a.getName() << ", AForm Shrubbery signed need grade " << a.getGradeToSign();
	o << " and for excute it need grade " << a.getGradeToExecute() << ". Signed = " << a.getSigned();
	return (o);
}
