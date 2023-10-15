#include "fixed.hpp"

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