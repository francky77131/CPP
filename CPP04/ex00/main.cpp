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
}