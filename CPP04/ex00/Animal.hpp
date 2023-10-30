#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal(void); //default constructor
		Animal(Animal const & src); //copy constructor
		Animal & operator=(Animal const & rhs); //copy assignment operator
		~Animal(void); //destructor

		virtual void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string _type;
	private:
};

#endif
