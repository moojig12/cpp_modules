#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void	Harl::error( void )
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now.\n";
}
void	Harl::babble( void )
{
	std::cout << "Unexpected silence...\n";
}

static int	level_identifier(std::string level)
{
	std::string	debug_lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < sizeof(debug_lvls)/sizeof(std::string); i++)
	{
		if (debug_lvls[i] == level)
			return (i + 1);
	}
	return (0);
}

void	Harl::complain(std::string level)
{
	void	(Harl::*debug_lvls[])(void) = {&Harl::babble, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	(this->*debug_lvls[level_identifier(level)])();
}

Harl::Harl()
{

}
Harl::~Harl()
{

}