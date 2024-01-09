#include "RPN.hpp"

RPN::RPN(void)
{
	std::cout << "RPN Default constructor called" << std::endl;
	return ;
}

RPN::RPN(std::string arg) : _input(arg)
{
	std::cout << "RPN Parametric constructor called" << std::endl;
	return ;
}

RPN::RPN(RPN const & src)
{
	std::cout << "RPN Copy constructor called" << std::endl;
	*this = src;
	return ;
}

RPN & RPN::operator=(RPN const & rhs)
{
	std::cout << "RPN Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_input = rhs._input;
		this->_stack = rhs._stack;
	}
	return (*this);
}

RPN::~RPN(void)
{
	std::cout << "RPN Destructor called" << std::endl;
	return ;
}

void	RPN::calcul(void)
{
	for (size_t i = 0; i < _input.size(); i++)
	{

		int	top;
		if (isdigit(_input[i]))
			_stack.push(atoi(&_input[i]));
		else if (_input[i] == '+' || _input[i] == '-')
		{
            if (_stack.size() == 1)
                throw DivisionByZero();
			top = _stack.top();
			_stack.pop();
			if (_input[i] == '+')
				_stack.top() += top;
			else
				_stack.top() -= top;
		}
		else if (_input[i] == '*' || _input[i] == '/')
		{
            if (_stack.size() == 1)
                throw DivisionByZero();
			top = _stack.top();
			_stack.pop();
			if (_input[i] == '*')
				_stack.top() *= top;
			else
			{
				if (top == 0 || _stack.top() == 0)
					throw DivisionByZero();
				else
				_stack.top() /= top;
			}
		}
	}
	std::cout << _stack.top() << std::endl;
}

bool	check_input(std::string arg)
{
	int		digit = 0;
	int		ope   = 0;

	for (size_t i = 0; i < arg.size() - 1; i++)
	{
		if (!isdigit(arg[i]) && arg[i] != '+' && arg[i] != '-' && arg[i] != '*' && arg[i] != '/' && arg[i] != ' ')
			return (false);
		if ((isdigit(arg[i]) || arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/') && arg[i + 1] != ' ')
			return (false);
		if (isdigit(arg[i]))
			digit++;
		else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
			ope++;
		if (ope != 0 && digit < 2)
			return (false);
	}
	size_t last = arg.size() - 1;

	if (arg[last] != '+' && arg[last] != '-' && arg[last] != '*' && arg[last] != '/')
		return (false);
	ope++;
	if (ope + 1 != digit)
		return (false);
	return (true);
}

const char*	RPN::DivisionByZero::what() const throw()
{
	return ("Error... Division by zero in your calcul");
}

std::ostream&   operator<<(std::ostream& o, RPN const & a)
{
	(void)a;
	return (o);
}