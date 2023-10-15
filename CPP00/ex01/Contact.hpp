#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
    Contact(void);
    ~Contact(void);

    int first_name(void);
    int last_name(void);
    int nick_name(void);
    int phone_number(void);
    int darkest_secret(void);
    std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nick_name(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif