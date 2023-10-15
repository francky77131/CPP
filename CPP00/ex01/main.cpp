#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   repertory;
    std::string buf;
    int         index = 0;

    while (buf != "EXIT")
    {
        std::cout << "Enter your command:";
        std::getline(std::cin, buf);
        if (buf == "ADD")
        {
            if (index > 7)
                index = 0;
            if (repertory.add(index) == 0)
                index++;
        }
        else if (buf == "SEARCH")
        {
            repertory.search();
            repertory.print_search();
        }
    	else if (buf != "EXIT" && buf.size() != 0)
		{
			std::cout << "Wrong argument. ";
			std::cout << "Please enter ADD, SEARCH or EXIT." << std::endl;
		}
        if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
    }
    return (0);
}