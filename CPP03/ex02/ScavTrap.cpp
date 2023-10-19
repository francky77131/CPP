#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_Name	= "no_name";
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	this->_Name	= name;
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (_Energy_point <= 0)
	{
		std::cout << "Oh ! ScavTrap " << _Name;
		std::cout << " no energy point remaining..." << std::endl;
		return ;
	}
	_Energy_point--;
	std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !";
	std::cout << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_Name = rhs.get_name();
		this->_Attack_damage = rhs.get_attack();
		this->_Energy_point = rhs.get_energy();
		this->_Hit_point = rhs.get_hp();
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	return ;
}
