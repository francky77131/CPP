#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}
