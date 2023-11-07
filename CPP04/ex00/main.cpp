/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:50:52 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:10:51 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


/*int	main(void)
{
	Animal Cheval;
	Dog Woof;
	Cat Miaou;

	Cheval.getType();
	Woof.getType();
	Miaou.getType();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Cheval.makeSound();
	Woof.makeSound();
	Miaou.makeSound();


	std::cout << std::endl;
	std::cout << std::endl;
	return(0);
}*/

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();


    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
}