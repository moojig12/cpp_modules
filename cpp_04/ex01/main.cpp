#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Tormal test
	{
		std::cout << "\033[1;35m\n*** Base Test ***\033[0m\n" << std::endl;
		std::cout << "\033[1;38:5:10m*** Creating the entities ***\033[0m\n";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "\033[1;38:5:14m*** Type of Dog ***\033[0m\n";
		std::cout << j->getType() << " " << std::endl;
		std::cout << "\033[1;38:5:14m*** Type of Cat***\033[0m\n";
		std::cout << i->getType() << " " << std::endl;

		std::cout << "\033[1;38:5:10m*** Making sounds ***\033[0m\n";
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "\033[1;38:5:9m*** Destroying Animals! ***\033[0m\n";
		delete (meta);	
		delete (i);
		delete (j);
		std::cout << "animal slaughter!\n";
	}
	std::cout << "\033[1;35m*** Base Test ended ***\033[0m\n";
	// Deep Copy Test
	{
		std::cout << "\033[1;35m\n*** Deep Copy Test ***\033[0m\n";

		std::cout << "\033[1;38:5:10m*** Creating originalDog ***\033[0m\n";
		Dog originalDog;
		originalDog.setIdea(0, "I love my human!");

		std::cout << "\033[1;38:5:10m*** Copying Dog ***\033[0m\n";
		Dog copyDog(originalDog);

		std::cout << "originalDog Idea (pre change): " << originalDog.getIdea(0) << "\n";
		std::cout << "copyDog Idea (pre change): " << copyDog.getIdea(0) << "\n";

		std::cout << "\033[1;38:5:14m*** Changing Idea for copyDog! ***\033[0m\n";
		copyDog.setIdea(0, "I hate my human!!!");

		std::cout << "originalDog Idea (post change): " << originalDog.getIdea(0) << "\n";
		std::cout << "copyDog Idea (post change): " << copyDog.getIdea(0) << "\n";
		std::cout << "\033[1;38:5:9m*** Destroying doggies! ***\033[0m\n";
	}
	std::cout << "\033[1;35m*** Deep Copy Test ended ***\033[0m\n";
	return 0;
}