#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Name	= "no_name";
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;	
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap parametric constructor called" << std::endl;
	this->_Name	= name;
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (_Energy_point <= 0)
	{
		std::cout << "Oh ! FragTrap " << _Name;
		std::cout << " no energy point remaining..." << std::endl;
		return ;
	}
	_Energy_point--;
	std::cout << "FragTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !";
	std::cout << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_Name = rhs.get_name();
		this->_Attack_damage = rhs.get_attack();
		this->_Energy_point = rhs.get_energy();
		this->_Hit_point = rhs.get_hp();
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Yeah ! High Five guys !!" << std::endl;
	return ;
}
