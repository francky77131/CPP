#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}
