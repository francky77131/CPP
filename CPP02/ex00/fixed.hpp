
#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
public:
    Fixed(void);
    Fixed(Fixed const & copy);
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
private:
    int _value;
    static int const _fract;
};

#endif