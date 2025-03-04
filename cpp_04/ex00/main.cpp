#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int argc, char **argv)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	std::cout << "animal slaughter!\n";
	delete (i);
	delete (j);

	if (argv[1])
	{
		std::string param(argv[1]);
		if (argc == 2 && param == "WRONG")
		{
			std::cout << "\e[1;38:5:12mproceeding with wrong animal tests\e[0m\n";
			
			const WrongAnimal* wrongMeta = new WrongAnimal;
			
			const WrongAnimal* wrongCat = new WrongCat;
			
			wrongCat->makeSound();
			wrongMeta->makeSound();
			
			delete (wrongMeta);
			delete (wrongCat);
		}
	}
}