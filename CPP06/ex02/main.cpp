#include "Base.hpp"

void	pressEnter(void)
{
	std::cout << std::endl << GREEN << "press ENTER to continue" << RESET << std::endl;
	std::cin.ignore();
	std::cout << "\033c";
}

int	main()
{
	{
		Base *base;

		for (int i = 0; i < 5; i++)
		{
			base = generate();
			
			std::cout << "Base address: " << base << std::endl;
			std::cout << "Base type   : ";
			
			identify(base);
			
			std::cout << std::endl;
			delete base;
		}
	}
	pressEnter();
	{
		Base *base;
		
		for (int i = 0; i < 5; i++)
		{
			base = generate();
			
			std::cout << "Base address: " << base << std::endl;
			std::cout << "Base type   : ";
			
			identify(*base);
			
			std::cout << std::endl;
			delete base;
		}
	}
	pressEnter();
	{
		Base *emptyPointer = NULL;
		Base emptyClass;

		std::cout << "emptyPointer address: " << emptyPointer << std::endl;
		std::cout << "Base type           : ";
		identify(emptyPointer);

		std::cout << std::endl;
		std::cout << "emptyClass address  : " << &emptyClass << std::endl;
		std::cout << "Base type           : ";
		identify(emptyClass);		
	}
	pressEnter();
}