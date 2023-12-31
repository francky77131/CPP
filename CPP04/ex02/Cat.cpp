#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	_braincat = new Brain();
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
		_braincat = new Brain(*rhs._braincat);
	}
	return (*this);
}

Brain*	Cat::get_brain(void) const
{
	return (this->_braincat);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _braincat;
	return ;
}
