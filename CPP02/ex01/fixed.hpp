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
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_value;
	static int const	_fract;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & a);

#endif