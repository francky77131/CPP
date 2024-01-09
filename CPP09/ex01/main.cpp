#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cerr << "Wrong number of argument." << std::endl, 1);
	std::string input(argv[1]);
	
	if (!check_input(input))
		return (std::cerr << "Error..." << std::endl, 1);
	RPN	test(input);

	try
	{
		test.calcul();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

/*
	Parcing de la ligne : 

	- Uniquement les caracteres de 0 a 9 et les caracteres d'operations tel : + - * /.
	- Il faut que tous les caracteres soit separer d'un espace.
	- Il faut qu' il y est digit + 1 operations, si j'ai 1 2 3 il me faut 2 operations.
	- Les deux premier caractere ne peuvent pas etre une operation.
	- Le dernier ne peux pas etre un digit.
*/