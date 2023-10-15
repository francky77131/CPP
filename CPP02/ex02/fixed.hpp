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

	Fixed&	operator=(Fixed const & egl);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int			_integer;
	static int	_decimal;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & a);

#endif