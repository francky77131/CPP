#include <iostream>
#include "fixed.hpp"

int main( void ) 
{
        /*Test pour > */
    // Fixed a(12);
    // Fixed b(11);
    // if (a > b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;

        /*Test pour < */
    // Fixed a(12);
    // Fixed b(13);
    // if (a > b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;
    

        /*Test pour <= */
    // Fixed a(13);
    // Fixed b(13);
    // if (a <= b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;
    

        /*Test pour >= */
    // Fixed a(14);
    // Fixed b(13);
    // if (a >= b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;
    
        /*Test pour == */
    // Fixed a(14);
    // Fixed b(14);
    // if (a == b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;
    
        /*Test pour != */
    // Fixed a(14);
    // Fixed b(13);
    // if (a != b)
    //     std::cout << "ok" << std::endl;
    // else
    //     std::cout << "ko" << std::endl;
    
        /*Test pour + */
    // Fixed a(14);
    // Fixed b(13);
    // Fixed c(1);

    // std::cout << a + b << std::endl;
    // std::cout << a + b + c << std::endl;

            /*Test pour - */
    // Fixed a(14);
    // Fixed b(13);
    // Fixed c(1);

    // std::cout << a - b << std::endl;
    // std::cout << a - b - c << std::endl;

            /*Test pour * */
    // Fixed a(14);
    // Fixed b(13);
    // Fixed c(1);

    // std::cout << a * b << std::endl;
    // std::cout << a * b * c << std::endl;

            /*Test pour / */
    // Fixed a(14);
    // Fixed b(2);

    // std::cout << a / b << std::endl;

            /*Test pour incrementation */
    // Fixed a(14);

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

                /*Test pour decrementation */
    // Fixed a(14);

    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;

        /*Test pour max */
    // Fixed a(14);
    // Fixed b(2);

    // std::cout << Fixed::max( a, b ) << std::endl;

            /*Test pour min */
    // Fixed a(14);
    // Fixed b(2);

    // std::cout << Fixed::min( a, b ) << std::endl;
    return 0;
}