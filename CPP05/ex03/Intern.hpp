#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void); //default constructor
		Intern(Intern const & src); //copy constructor
		Intern & operator=(Intern const & rhs); //copy assignment operator
		~Intern(void); //destructor

		AForm*	makeForm(std::string form, std::string target);
		AForm*  createShrubbery(std::string target);
		AForm*  createRobotomy(std::string target);
		AForm*  createPresidential(std::string target);
	protected:
	private:
};

#endif
