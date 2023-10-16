#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class	Fixed
{
public:
	
	Fixed(void);
	Fixed(Fixed const & copy);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);

	Fixed&	operator=(Fixed const & rhs);

	bool	operator>(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed	operator++(int); //postincrementation
	Fixed&	operator++(void); //preincrementation
	Fixed	operator--(int); //postincrementation
	Fixed&	operator--(void); //preincrementation
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed	max(Fixed& first, Fixed& second);
	static Fixed	max(Fixed const & first, Fixed const & second);
	static Fixed	min(Fixed& first, Fixed& second);
	static Fixed	min(Fixed const & first, Fixed const & second);

private:

	int			_value;
	static int const	_fract;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & a);

#endif