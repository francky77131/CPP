#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int Contact::first_name(void)
{
    std::string buf;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, buf);
    if (buf.empty() == 1)
    {
        std::cout << "each field must be filled." << std::endl;
        return (1);
    }
    this->_first_name = buf;
    return (0);
}

int Contact::last_name(void)
{
    std::string buf;

    std::cout << "Enter your last name: ";
    std::getline(std::cin, buf);
    if (buf.empty() == 1)
    {
        std::cout << "each field must be filled." << std::endl;
        this->_first_name.clear();
        return (1);
    }
    this->_last_name = buf;
    return (0);
}

int Contact::nick_name(void)
{
    std::string buf;

    std::cout << "Enter your nick name: ";
    std::getline(std::cin, buf);
    if (buf.empty() == 1)
    {
        std::cout << "each field must be filled." << std::endl;
        this->_first_name.clear();
        this->_last_name.clear();
        return (1);
    }
    this->_nick_name = buf;
    return (0);
}

int Contact::phone_number(void)
{
    std::string buf;

    std::cout << "Enter your phone number: ";
    std::getline(std::cin, buf);
    if (buf.empty() == 1)
    {
        std::cout << "each field must be filled." << std::endl;
        this->_first_name.clear();
        this->_last_name.clear();
        this->_nick_name.clear();
        return (1);
    }
    this->_phone_number = buf;
    return (0);
}

int Contact::darkest_secret(void)
{
    std::string buf;

    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, buf);
    if (buf.empty() == 1)
    {
        std::cout << "each field must be filled." << std::endl;
        this->_first_name.clear();
        this->_last_name.clear();
        this->_nick_name.clear();
        this->_phone_number.clear();
        return (1);
    }
    this->_darkest_secret = buf;
    return (0);
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void) const
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}
