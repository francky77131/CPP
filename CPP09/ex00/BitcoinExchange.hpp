#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <exception>
#include <map>

class	BitcoinExchange
{
	public:
		BitcoinExchange(void); //default constructor
		BitcoinExchange(BitcoinExchange const & src); //copy constructor
		BitcoinExchange & operator=(BitcoinExchange const & rhs); //copy assignment operator
		~BitcoinExchange(void); //destructor

		class	BadInputs : public std::exception
		{
			const char*	what() const throw();
		};

		class	BadDate : public std::exception
		{
			const char* what() const throw();
		};

		class	BadValue : public std::exception
		{
			const char* what() const throw();
		};

		void	checkInput(std::ifstream &file);
		void	checkline(std::string line);
		void	checkDate(std::string date);
		void	checkValue(std::string value);
		void	final_print(std::string line);

	private:
		std::map<std::string, float>	_data;
		//std::map<std::string, float>	_input;
};

std::ostream&   operator<<(std::ostream& o, BitcoinExchange const & a);

#endif