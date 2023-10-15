#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructor PhoneBook called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Deconstructor PhoneBook called" << std::endl;
	return ;
}

void PhoneBook::search(void)
{
    int i = 0;
    int j = 0;
    std::string str;
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < 8)
    {
        str.clear();
        str = this->_contact[0].get_first_name();
        if (str.empty() != 1)
        {
            std::cout << "|         " << i + 1 << "|";
            j = 0;
            while (j < 3)
            {
                if (j == 0)
                    print_first_name(i);
                if (j == 1)
                    print_last_name(i);
                if (j == 2)
                    print_nick_name(i);
                j++;
            }
            std::cout << std::endl;
        }
        else
            break ;
        i++;
    }
    std::cout << " ------------------------------------------- " << std::endl;
}

void PhoneBook::print_first_name(int i)
{
    std::string str;
    int size = 0;
    str.clear();
    str = this->_contact[i].get_first_name();
    size = str.size();
    if (size > 10)
    {
        str.resize(10);
		str[str.size() - 1] = '.';
    }
    while (size < 10)
    {
        std::cout << " ";
        size++;
    }
    std::cout << str;
    std::cout << "|";
}

void PhoneBook::print_last_name(int i)
{
    std::string str;
    int size = 0;
    str.clear();
    str = this->_contact[i].get_last_name();
    size = str.size();
    if (size > 10)
    {
        str.resize(10);
		str[str.size() - 1] = '.';
    }
    while (size < 10)
    {
        std::cout << " ";
        size++;
    }
    std::cout << str;
    std::cout << "|";
}

void PhoneBook::print_nick_name(int i)
{
    std::string str;
    int size = 0;
    str.clear();
    str = this->_contact[i].get_nick_name();
    size = str.size();
    if (size > 10)
    {
        str.resize(10);
		str[str.size() - 1] = '.';
    }
    while (size < 10)
    {
        std::cout << " ";
        size++;
    }
    std::cout << str;
    std::cout << "|";
}

void PhoneBook::print_phone_number(int i)
{
    std::string str;
    int size = 0;
    str.clear();
    str = this->_contact[i].get_phone_number();
    size = str.size();
    if (size > 10)
    {
        str.resize(10);
		str[str.size() - 1] = '.';
    }
    while (size < 10)
    {
        std::cout << " ";
        size++;
    }
    std::cout << str;
    std::cout << "|";
}

void PhoneBook::print_darkest_secret(int i)
{
    std::string str;
    int size = 0;
    str.clear();
    str = this->_contact[i].get_darkest_secret();
    size = str.size();
    if (size > 10)
    {
        str.resize(10);
		str[str.size() - 1] = '.';
    }
    while (size < 10)
    {
        std::cout << " ";
        size++;
    }
    std::cout << str;
    std::cout << "|";
}

void PhoneBook::print_search(void)
{
    std::string str;
    std::string tmp;
    int         index;

    std::cout << "Please chose a number between 1 and 8: ";
    std::getline(std::cin, str);
    index = (int)str[0] - 48;
    if (index > 0 && index <= 8)
        tmp = this->_contact[index - 1].get_first_name();
    if (tmp.empty() == 1)
    {
        std::cout << "Nobody at this index." << std::endl;
        return ;
    }
    if (index > 0 && index <= 8)
    {
        std::cout << "First name: " << this->_contact[index - 1].get_first_name() << std::endl;
        std::cout << "Last name: " << this->_contact[index - 1].get_last_name() << std::endl;
        std::cout << "Nick name: " << this->_contact[index - 1].get_nick_name() << std::endl;
        std::cout << "Phone number: " << this->_contact[index - 1].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << this->_contact[index - 1].get_darkest_secret() << std::endl;
    }
    else
        std::cout << "Wrong argument." << std::endl;
}

int PhoneBook::add(int i)
{
    if (this->_contact[i].first_name() == 1)
        return (1);
    if (this->_contact[i].last_name() == 1)
        return (1);
    if (this->_contact[i].nick_name() == 1)
        return (1);
    if (this->_contact[i].phone_number() == 1)
        return (1);
    if (this->_contact[i].darkest_secret() == 1)
        return (1);
    return (0);
}