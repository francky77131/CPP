#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template<typename T, class Container = std::deque<T> >

class	MutantStack : public std::stack<T>
{
public:
	MutantStack(void)
	{
		std::cout << "MutantStack Default constructor called" << std::endl;
		return ;
	}

	MutantStack(MutantStack const & src) : std::stack<T, Container>(src)
	{
		std::cout << "MutantStack Copy constructor called" << std::endl;
		return ;
	}
	
	MutantStack & operator=(MutantStack const & rhs)
	{
		std::cout << "MutantStack Copy assignment operator called" << std::endl;
		if (this != &rhs)
		{
			MutantStack	Tmp(rhs);

			std::swap(std::stack<T>::c, Tmp.c);
		}
		return (*this);
	}

	~MutantStack(void)
	{	
		std::cout << "MutantStack Destructor called" << std::endl;
		return ;
	}

	typedef typename	std::stack<T>::container_type::iterator iterator;
	typedef typename	std::stack<T>::container_type::const_iterator const_iterator;


	iterator	begin(void)
	{
		return (this->c.begin());
	}

	iterator	end(void)
	{
		return (this->c.end());
	}

	const_iterator	begin(void) const
	{
		return (this->c.begin());
	}

	const_iterator	end(void) const
	{
		return (this->c.end());
	}
};

template<typename T>
std::ostream&   operator<<(std::ostream& o, MutantStack<T> const & a)
{
	(void)a;
	return (o);
}

#endif