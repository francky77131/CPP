#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap 
{
	public:
		FragTrap(void); //default constructor
		FragTrap(FragTrap const & src); //copy constructor
		FragTrap(std::string name); //parametric constructor
		FragTrap & operator=(FragTrap const & rhs); //copy assignment operator
		~FragTrap(void); //destructor

		void highFivesGuys(void);
		void attack(const std::string& target);
	private:
};

#endif
