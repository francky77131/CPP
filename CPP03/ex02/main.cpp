#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Gus("Gus");
	ScavTrap	Bobby("Bobby");
	FragTrap	Daisy("Daisy");
	std::cout << Gus << std::endl;
	std::cout << Bobby << std::endl;
	std::cout << Daisy << std::endl;
	Bobby.attack("Tristan");
	Gus.attack("Tristan");
	Daisy.attack("Tristan");
	Bobby.guardGate();
	Daisy.highFivesGuys();

	return (0);
}