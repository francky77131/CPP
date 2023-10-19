#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void); //default constructor
		ScavTrap(ScavTrap const & src); //copy constructor
		ScavTrap(std::string name); //parametric constructor
		ScavTrap & operator=(ScavTrap const & rhs); //copy assignment operator
		~ScavTrap(void); //destructor

		void guardGate();
		void attack(const std::string& target);
	private:
};

#endif