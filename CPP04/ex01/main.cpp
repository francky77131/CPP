/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:37 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 17:18:09 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	test_tab(void)
{
	unsigned int	nbr = 10;
	Animal	*animal_tab[nbr];

	for (unsigned int i = 0; i < nbr / 2; i++)
		animal_tab[i] = new Cat();

	for (unsigned int i = nbr / 2; i < nbr; i++)
		animal_tab[i] = new Dog();

	for (unsigned int i = 0; i < nbr; i++)
		delete animal_tab[i];
}

void	test_subject(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}

int main()
{
	// Dog	*test = new Dog;
	// Dog test2 = *test;
	
	// test->get_brain()->set_ideas("new idea");
	// std::cout << "test idea 0: " << test->get_brain()->get_ideas(0) << std::endl;
	// std::cout << "test2 idea 0: " << test2.get_brain()->get_ideas(0) << std::endl;
	test_tab();
	//test_subject();
	//delete test;
	return (0);
}