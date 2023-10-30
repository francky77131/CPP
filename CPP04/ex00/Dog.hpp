#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void); //default constructor
		Dog(Dog const & src); //copy constructor
		Dog & operator=(Dog const & rhs); //copy assignment operator
		~Dog(void); //destructor

		void		makeSound(void) const;


	protected:
	private:
};

#endif
