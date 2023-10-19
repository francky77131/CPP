#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Random_name"), _Hit_point(100), _Energy_point(100), _Attack_damage(30)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_point(100), _Energy_point(100), _Attack_damage(30)
{
	std::cout << "ClapTrap parametric constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_Name = rhs.get_name();
		this->_Attack_damage = rhs.get_attack();
		this->_Energy_point = rhs.get_energy();
		this->_Hit_point = rhs.get_hp();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}


void ClapTrap::attack(const std::string& target)
{
	if (_Energy_point <= 0)
	{
		std::cout << "Oh ! ClapTrap " << _Name;
		std::cout << " no energy point remaining..." << std::endl;
		return ;
	}
	_Energy_point--;
	std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_Hit_point -= amount;
	if (_Hit_point <= 0)
	{
		std::cout << "Oh ! ClapTrap " << _Name;
		std::cout << " no Hit points remaining... He's already died, are you sure ?" << std::endl;
		return ;
	}
	else
		std::cout << "ClapTrap " << _Name << " take damage -" << amount << " hit points!" << std::endl;
		std::cout << "Now ClapTrap " << _Name << " have " << _Hit_point << " Hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy_point <= 0)
	{
		std::cout << "Oh ! ClapTrap " << _Name;
		std::cout << " no energy point remaining..." << std::endl;
		return ;
	}
	if (_Hit_point <= 0)
	{
		std::cout << "Oh ! ClapTrap " << _Name;
		std::cout << " no Hit points remaining... he is dead..." << std::endl;
		return ;
	}
	_Energy_point--;
	_Hit_point++;
	std::cout << "ClapTrap " << _Name << " repaired +" << amount << " hit points!" << std::endl;
	std::cout << "Now ClapTrap " << _Name << " have " << _Hit_point << " Hit points" << std::endl;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_Name);
}

int	ClapTrap::get_hp(void) const
{
	return (this->_Hit_point);
}

int	ClapTrap::get_attack(void) const
{
	return (this->_Attack_damage);
}

int	ClapTrap::get_energy(void) const
{
	return (this->_Energy_point);
}

std::ostream&   operator<<(std::ostream& o, ClapTrap const & a)
{
	o << "Name : " << a.get_name() << std::endl;
	o << "hp : " << a.get_hp() << std::endl;
	o << "energy : " << a.get_energy() << std::endl;
	o << "attack : " << a.get_attack() << std::endl;
	return (o);
}