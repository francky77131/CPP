#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		std::cout << "Not enough argument." << std::endl;
	else if (argc > 2)
		std::cout << "Too much argument." << std::endl;
	else
	{
		std::string		filename(argv[1]);
		std::ifstream	file(filename.c_str());
		if (!file)
		{
			std::cout << "Error: could not open file." << std::endl;
			return (1);
		}
		BitcoinExchange		test;

		test.checkInput(file);
		file.close();
	}
	return (0);
}