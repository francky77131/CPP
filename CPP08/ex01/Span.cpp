#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span Default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int N) : _size(N), _add(0)
{
	std::cout << "Span Parametric constructor called" << std::endl;
	this->_data.resize(N);
}

Span::Span(Span const & src)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Span Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_data = rhs._data;
		this->_add = rhs._add;
		this->_size = rhs._size;
	}
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::endl;
	return ;
}

std::ostream&   operator<<(std::ostream& o, Span const & a)
{
	std::vector<int>	print = a.getData();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = print.end();

	int i = 0;

	for (it = print.begin(); it != ite; it++)
	{
		o << "it[" << i << "] = : " << *it << std::endl;
		i++;
	}
	return (o);
}

const std::vector<int> &Span::getData() const
{
	return (this->_data);
}

void Span::addNumber(int nbr)
{
	std::vector<int>::iterator it = this->_data.begin() + this->_add;

	if (this->_add >= this->_size)
		throw FullVector();
	else
	{
		*it = nbr;
		this->_add++;
	}
}

void Span::addNumber(std::vector<int>::iterator beginIterator, std::vector<int>::iterator endIterator)
{
	std::srand(static_cast<unsigned>(std::time(0)));
	
	std::vector<int>::iterator it = this->_data.begin() + this->_add;

	while (beginIterator != endIterator)
	{
		std::cout << "add = " << this->_add << std::endl;
		std::cout << "size = " << this->_size << std::endl;
		int randomValue = std::rand() % 1000 + 1;
		std::cout << "random value = " << randomValue << std::endl;
		if (this->_add >= this->_size)
			throw FullVector();
		else
		{
			*it = randomValue;
			it++;
			this->_add++;
		}
		beginIterator++;
	}
}

int Span::shortestSpan() const
{
	if (this->_add < 2)
		throw NotEnoughtNumber();
	int res = std::abs(this->_data[0] - this->_data[1]);

	for (unsigned int i = 0; i < this->_add; i++)
	{
		unsigned int j = i + 1;
		for (;  j < this->_add; j++)
			if (res > std::abs(this->_data[i] - this->_data[j]))
				res = std::abs(this->_data[i] - this->_data[j]);
	}
	return (res);
}

int Span::longestSpan() const
{
	if (this->_add < 2)
		throw NotEnoughtNumber();
	int res = std::abs(this->_data[0] - this->_data[1]);

	for (unsigned int i = 0; i < this->_add; i++)
	{
		unsigned int j = i + 1;
		for (;  j < this->_add; j++)
			if (res < std::abs(this->_data[i] - this->_data[j]))
				res = std::abs(this->_data[i] - this->_data[j]);
	}
	return (res);
}
