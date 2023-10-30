#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void); //default constructor
		WrongAnimal(WrongAnimal const & src); //copy constructor
		WrongAnimal & operator=(WrongAnimal const & rhs); //copy assignment operator
		~WrongAnimal(void); //destructor

		virtual void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string _type;
	private:
};

#endif
