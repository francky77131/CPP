#include "Base.hpp"

Base * generate(void)
{
	Base *ptr;
	std::srand((unsigned) time(NULL));
    // Générez un nombre aléatoire
    int randomValue = std::rand() % 3;
	if (randomValue == 0)
		return (ptr = new(A));
	else if (randomValue == 1)
		return (ptr = new(B));
	else
		return (ptr = new(C));

}

void identify(Base* p)
{
	A*	first = dynamic_cast<A*>(p);
	B*	secound = dynamic_cast<B*>(p);
	C*	third = dynamic_cast<C*>(p);

	if (first != NULL)
	{
		std::cout << "type is A." << std::endl;
		return ;
	}
	else if (secound != NULL)
	{
		std::cout << "type is B." << std::endl;
		return ;
	}
	else if (third != NULL)
	{
		std::cout << "type is C." << std::endl;
		return ;
	}
	else
		std::cout << "p is NULL." << std::endl;
	
}

void identify(Base& p)
{
	try
	{
		A& first = dynamic_cast<A&>(p);
		std::cout << "type is A" << std::endl;
		(void)first;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		B& secound = dynamic_cast<B&>(p);
		std::cout << "type is B" << std::endl;
		(void)secound;
	}
	catch (std::exception & e) {}
	try
	{
		C& third = dynamic_cast<C&>(p);
		std::cout << "type is C" << std::endl;
		(void)third;
	}
	catch (std::exception & e)
	{
		std::cout << "bad cast" << std::endl;
	}
}

Base::~Base(void)
{
	std::cout << "Base Destructor called" << std::endl;
	return ;
}