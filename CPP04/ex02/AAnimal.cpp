#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Default constructor called" << std::endl;
	this->_type = "AAnimal";
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}
