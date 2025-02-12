#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(const std::string s);
	~Zombie();
	void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(const std::string name);