#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class	Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src); //copy constructor
		Span & operator=(Span const & rhs); //copy assignment operator
		~Span(void); //destructor

		const std::vector<int>		&getData() const;
		void addNumber(int nbr);
		void addNumber(std::vector<int>::iterator beginIterator, std::vector<int>::iterator endIterator);
		int shortestSpan() const;
		int longestSpan() const;

		class FullVector : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Vector is full");
				}
		};

		class NotEnoughtNumber : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Not enought number");
				}
		};

	private:
		Span(void); //default constructor
		std::vector<int> _data;
		unsigned int _size;
		unsigned int _add;
};

std::ostream&   operator<<(std::ostream& o, Span const & a);

#endif
