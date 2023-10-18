#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap	Bobby("Bobby");

	std::cout << Bobby << std::endl;
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	std::cout << Bobby << std::endl;
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.takeDamage(4);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	Bobby.beRepaired(1);
	Bobby.beRepaired(1);
	std::cout << Bobby << std::endl;
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
    
    return (0);
}