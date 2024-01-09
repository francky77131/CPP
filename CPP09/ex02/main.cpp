#include "PmergeMe.hpp"

int main(int argc, char **argv)
{

	for (int i = 1; i < argc; i++)
	{
		std::string		str(argv[i]);
		if (!check_input(str))
			return (std::cout << "Error" << std::endl, 1);
		}
	PmergeMe<std::deque<int> >	deq(argc, argv);
	PmergeMe<std::vector<int> >	vec(argc, argv);

    std::cout << "Liste non triée : ";
	std::cout << deq << std::endl;
	std::cout << vec << std::endl;

	clock_t	d_start = clock();
	deq.Ford_Johnson_algorithm(deq._cont);
	clock_t	d_end = clock();

	std::cout << "Liste triée : ";
	std::cout << deq << std::endl;

	std::cout << std::fixed;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : ";
	std::cout << (static_cast<float>(d_end - d_start)) / CLOCKS_PER_SEC << " s" << std::endl;
    
	clock_t	v_start = clock();
	vec.Ford_Johnson_algorithm(vec._cont);
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : ";
	std::cout << (static_cast<float>(clock() - v_start)) / CLOCKS_PER_SEC << " s" << std::endl;

    return 0;
}

// A faire :

/*
	- Faire en sorte que ca marche avec un template de classe
	- Faire le parcing des arguments
	- Print le time de chaque container.
*/