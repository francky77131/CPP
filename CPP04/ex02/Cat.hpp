#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "AAnimal.hpp"

class	Cat : public AAnimal
{
	public:
		Cat(void); //default constructor
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		virtual ~Cat(void); //destructor

		void		makeSound(void) const;
		Brain*	get_brain(void) const;

	private:
		Brain	*_braincat;
};

#endif
