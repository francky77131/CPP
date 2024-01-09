#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Default constructor called" << std::endl;
	std::string		data = "data.csv";
	std::ifstream	datafile(data.c_str());
	if (!datafile)
		std::cout << "Error : could not open data.csv file." << std::endl;
	else
	{
		std::string	buff;
		std::getline(datafile, buff);
		while (std::getline(datafile, buff))
		{
			std::string	key_map   = buff.substr(0, 10);
			std::string	value     = buff.substr(11);
			float		value_map = atof(value.c_str());

			_data[key_map] = value_map;
		}
		datafile.close();
	}
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	std::cout << "BitcoinExchange Copy constructor called" << std::endl;
	*this = src;
	return ;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_data = rhs._data;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;
	return ;
}

void	BitcoinExchange::checkInput(std::ifstream &file)
{
	std::string	buff;
	std::getline(file, buff);
	while(std::getline(file, buff))
	{
		try
		{
			checkline(buff);
			try
			{
				checkDate(buff.substr(0, buff.find("|") - 1));
				try
				{
					checkValue(buff.substr(buff.find("|") + 1));
					final_print(buff);
				}
				catch(std::exception &e)
				{
					std::cout << e.what() << std::endl;
				}
			}
			catch(std::exception &e)
			{
				std::cout << e.what() << " => " << buff << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << e.what() <<  " => " << buff << std::endl;
		}
	}
}

void	BitcoinExchange::checkline(std::string line)
{
	for (size_t i = 0; i < line.size(); i++)
	{
		if (i == 4 || i == 7)
		{
			if (line[i] != '-')
				throw BadInputs();
		}
		else if (i == 10 || i == 12)
		{
			if (line[i] != ' ')
				throw BadInputs();
		}
		else if (i == 11)
		{
			if (line[i] != '|')
				throw BadInputs();
		}
		else if (line.size() < 14)
			throw BadInputs();
		else
		{
			if (!isdigit(line[i]) && line[i] != '.')
				throw BadInputs();
		}
	}
}

void	BitcoinExchange::checkDate(std::string date)
{
	std::string	s_month = date.substr(5, date.find("-") - 2);
	std::string	s_day   = date.substr(8);
	int			month   = atoi(s_month.c_str());
	int			day     = atoi(s_day.c_str());

	if (month > 12 || month < 1)
		throw BadDate();
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31 || day < 1)
			throw BadDate();
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30 || day < 1)
			throw BadDate();
	}
	else if (month == 2)
	{
		std::string		s_year = date.substr(0, date.find("-"));
		int				year   = atoi(s_year.c_str());
	
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			if (day > 29 || day < 1)
				throw BadDate();
		}
		else
		{
			if (day > 28 || day < 1)
				throw BadDate();
		}
	}
}

void	BitcoinExchange::checkValue(std::string line)
{
	float			value   = atof(line.c_str());

	if (value < 0 || value > 1000)
		throw BadValue();
}

void	BitcoinExchange::final_print(std::string line)
{
	std::string		date    = line.substr(0, 9);
	std::string		s_value = line.substr(13);
	float			value   = atof(s_value.c_str());

	std::map<std::string, float>::iterator	it = _data.begin();

	while (it->first <= date)
		it++;

	std::cout << date << " => " << value << " = " << it->second * value << std::endl;
}

const char*	BitcoinExchange::BadInputs::what() const throw()
{
	return ("Bad input line. Correct input is : Year-Month-Day | Value(0-1000)");
}

const char*	BitcoinExchange::BadDate::what() const throw()
{
	return ("Bad date input. Check if the date exist.");
}

const char* BitcoinExchange::BadValue::what() const throw()
{
	return ("Bad value. Check if the value is between 0 and 1000");
}

std::ostream&   operator<<(std::ostream& o, BitcoinExchange const & a)
{
	(void)a;
	return (o);
}