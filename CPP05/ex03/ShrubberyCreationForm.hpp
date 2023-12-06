#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
	ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src); //copy constructor
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); //copy assignment operator
		~ShrubberyCreationForm(void); //destructor
		
		void execute(Bureaucrat const & executor) const;
	protected:
	private:
		ShrubberyCreationForm(void); //default constructor
		std::string _target;
};

std::ostream&   operator<<(std::ostream& o, ShrubberyCreationForm const & a);

#endif
