#include "fixed.hpp"

int const   Fixed::_fract = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const  i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_fract;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_fract));
	return ;
}

Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)this->toFloat());
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fract));
}

std::ostream&	operator<<(std::ostream& o, Fixed const & a)
{
	o << a.toFloat();
	return (o);
}