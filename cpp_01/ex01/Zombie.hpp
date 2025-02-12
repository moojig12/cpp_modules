#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	Zombie(const std::string s);
	~Zombie();

	void	announce(void);
	void	setName(const std::string name);
};

Zombie* zombieHorde( int N, std::string name );