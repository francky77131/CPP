#ifndef PMERGEME2_HPP
# define PMERGEME2_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <climits>
#include <deque>
#include <ctime>

template<typename T>
class	PmergeMe
{
public:
	PmergeMe(void)
	{
		std::cout << "PmergeMe Default constructor called" << std::endl;
		return ;
	}
	
	PmergeMe(int argc, char **argv)
	{
		std::cout << "PmergeMe Parametric constructor called" << std::endl;
		for (int i = 1; i < argc; i++)
		{
		std::string str = argv[i];
		_cont.push_back(atoi(str.c_str()));
		}
		return ;
	}

	PmergeMe(PmergeMe<T> const & src) : _cont(src._cont)
	{
		std::cout << "PmergeMe Copy constructor called" << std::endl;
		*this = src;
		return ;
	}
	
	PmergeMe<T> & operator=(PmergeMe<T> const & rhs)
	{
		std::cout << "PmergeMe Copy assignment operator called" << std::endl;
		if (this != &rhs)
		{
			this->_cont = rhs._cont;
		}
		return (*this);
	}
	
	~PmergeMe(void)
	{
		std::cout << "PmergeMe Destructor called" << std::endl;
		return ;
	}
	
	void	Ford_Johnson_algorithm(T &lst)
	{
		if (lst.size() <= 1)
			return ;
	
		int					half = lst.size() / 2;
		T	left(lst.begin(), lst.begin() + half);
		T	right(lst.begin() + half, lst.end());
	
		Ford_Johnson_algorithm(left);
		Ford_Johnson_algorithm(right);
		lst.clear();
		merge_insert(left, right, lst);
	}
	
	void	merge_insert(T &left, T &right, T &result)
	{
		size_t	i = 0;
		size_t	j = 0;
	
		while (i < left.size() && j < right.size())
		{
			if (left[i] < right[j])
			{
				result.push_back(left[i]);
				i++;
			}
			else
			{
				result.push_back(right[j]);
				j++;
			}
		}
		while (i < left.size())
		{
			result.push_back(left[i]);
			i++;
		}
		while (j < right.size())
		{
			result.push_back(right[j]);
			j++;
		}
	}
	T	_cont;
};

bool	check_input(std::string str)
{
	char	*end_ptr;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	if (std::strtol(str.c_str(), &end_ptr, 10) > INT_MAX)
		return (false);
	return (true);
}
	
template<typename T>
std::ostream&	operator<<(std::ostream& o, PmergeMe<T> const & a)
{
	T	print = a._cont;
	typename	T::iterator	it;

	for (it = print.begin(); it != print.end(); it++)
	{
		o << *it << " ";
	}
	return (o);
}

#endif