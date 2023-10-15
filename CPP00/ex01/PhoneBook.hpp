#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    int add(int i);
    void search(void);
    void print_search(void);

private:
    Contact _contact[8];
    void print_first_name(int i);
    void print_last_name(int i);
    void print_nick_name(int i);
    void print_phone_number(int i);
    void print_darkest_secret(int i);
};

#endif