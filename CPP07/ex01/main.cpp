#include "iter.hpp"

int main( void ) 
{
    int tab[3] = {1, 2, 3};
    iter(tab, 2, print);

    std::string tab1[] = {
        "coucou",
        "ca va",
        "oui",
    };
    iter(tab1, 2, print);
    return 0;
}