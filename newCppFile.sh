#!/bin/bash

for name in "$@"
do {
upperstr=$(echo $name | tr '[:lower:]' '[:upper:]')

echo "#ifndef "$upperstr"_HPP
# define "$upperstr"_HPP

#include <iostream>
#include <string>

class	$name
{
	public:
		$name(void); //default constructor
		$name($name const & src); //copy constructor
		$name & operator=($name const & rhs); //copy assignment operator
		~$name(void); //destructor

	protected:
	private:
};

std::ostream&   operator<<(std::ostream& o, $name const & a);

#endif" >> $name.hpp

echo "#include \"$name.hpp\"

$name::$name(void)
{
	std::cout << \"$name Default constructor called\" << std::endl;
	return ;
}

$name::$name($name const & src)
{
	std::cout << \"$name Copy constructor called\" << std::endl;
	*this = src;
	return ;
}

$name & $name::operator=($name const & rhs)
{
	std::cout << \"$name Copy assignment operator called\" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

$name::~$name(void)
{
	std::cout << \"$name Destructor called\" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, $name const & a)
{
	return (o);
}" >> $name.cpp
}
vim $name.hpp -c 'Stdheader' -c 'wq'
vim $name.cpp -c 'Stdheader' -c 'wq'
done

