#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class	RPN
{
	public:
		RPN(void); //default constructor
		RPN(std::string arg);
		RPN(RPN const & src); //copy constructor
		RPN & operator=(RPN const & rhs); //copy assignment operator
		~RPN(void); //destructor

		class	DivisionByZero : public std::exception
		{
			const char*	what() const throw();
		};

		void	calcul(void);

	private:
		std::string			_input;
		std::stack<int>		_stack;
};

bool			check_input(std::string arg);
std::ostream&   operator<<(std::ostream& o, RPN const & a);

#endif