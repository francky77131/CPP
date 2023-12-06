#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src); //copy constructor
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); //copy assignment operator
		~PresidentialPardonForm(void); //destructor

		void execute(Bureaucrat const & executor) const;

	protected:
	private:
		PresidentialPardonForm(void); //default constructor
		std::string _target;

};

std::ostream&   operator<<(std::ostream& o, PresidentialPardonForm const & a);

#endif
