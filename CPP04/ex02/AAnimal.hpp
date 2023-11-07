#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
	public:
		AAnimal(void); //default constructor
		AAnimal(AAnimal const & src); //copy constructor
		AAnimal & operator=(AAnimal const & rhs); //copy assignment operator
		virtual ~AAnimal(void); //destructor

		std::string	getType(void) const;
		virtual void		makeSound(void) const = 0;
	protected:
		std::string _type;
	private:
};

#endif
