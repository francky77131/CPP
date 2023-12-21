/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:13:25 by frgojard          #+#    #+#             */
/*   Updated: 2023/12/21 16:41:55 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class	Array
{
	private:
    	T* _tab;
    	std::size_t _size;
	public:
		Array(void) : _size(0)
		{
			std::cout << "create an empty default Array" << std::endl;
			_tab = new T[_size];
		};
		Array(unsigned int n) : _size(n)
		{
			std::cout << "create an default Array" << std::endl;
			_tab = new T[_size];
		};
		Array(Array const & src) : _size(src._size)
		{
			std::cout << "Array Copy constructor called" << std::endl;
			_tab = new T[_size];
			
			for (std::size_t i = 0; i < _size; i++)
			{
				_tab[i] = src._tab[i];
			}
		};
		Array & operator=(Array const & rhs)
		{
			std::cout << "Operator = is called" << std::endl;
			if (this != &rhs)
			{
       			 delete[] _tab;
        		_tab = new T[rhs._size];
       			_size = rhs._size;
        		std::wmemcpy(_tab, rhs._tab, _size * sizeof(T));
    		}
   			return *this;
		}
		class	OutOfRange : public std::exception
		{
			public:
				const char* what() const throw();
		};
		T&	operator[](unsigned int index)
		{
			if (index < _size)
				return (_tab[index]);
			else
				throw OutOfRange();
		}
		const T&	operator[](unsigned int index) const
		{
			if (index < _size)
				return (_tab[index]);
			else
				throw OutOfRange();
		}
		~Array(void)
		{
			std::cout << "Array destructor is called" << std::endl;
			delete [] _tab;
		}

	protected:
};

template<typename T>

const char*		Array<T>::OutOfRange::what() const throw()
{
	return ("Index is out of range");
}

#endif
