#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
	ScavTrap	Bobby("Bobby");
	ClapTrap	Dodo("Bobby");

	Bobby.attack("Daisy");
	Dodo.attack("Daisy");
    Bobby.guardGate();
	return (0);
}