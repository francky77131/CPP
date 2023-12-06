#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

AForm*  Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*  Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*  Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	AForm *(Intern::*ptrFt[3])(std::string);
	
	ptrFt[0] = &Intern::createShrubbery;
	ptrFt[1] = &Intern::createRobotomy;
	ptrFt[2] = &Intern::createPresidential;

	std::string Tab[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (Tab[i] == form)
		{
			std::cout << "Intern create " << Tab[i] << std::endl;
			return (this->*ptrFt[i])(target);
		}
	}
	std::cout << "Wrong name form." << std::endl;
	return (NULL);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

