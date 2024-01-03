#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    std::vector<int> v(5);
    try
    {
        sp.addNumber(v.begin(), v.end());
        std::cout << sp << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
return 0;
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(10);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(5);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }