#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "AAnimal.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void); //default constructor
		Dog(Dog const & src); //copy constructor
		Dog & operator=(Dog const & rhs); //copy assignment operator
		~Dog(void); //destructor

		void		makeSound(void) const;
		Brain*	get_brain(void) const;

	private:
		Brain	*_braindog;
};

#endif
