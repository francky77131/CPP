#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap(void); //default constructor
		ClapTrap(ClapTrap const & src); //copy constructor
		ClapTrap(std::string name); //parametric constructor
		ClapTrap & operator=(ClapTrap const & rhs); //copy assignment operator
		~ClapTrap(void); //destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	get_name(void) const;
		int	get_hp(void) const;
		int	get_attack(void) const;
		int	get_energy(void) const;


	private:
		std::string _Name;
		int			_Hit_point;
		int			_Energy_point;
		int			_Attack_damage;
};

std::ostream&   operator<<(std::ostream& o, ClapTrap const & a);

#endif
