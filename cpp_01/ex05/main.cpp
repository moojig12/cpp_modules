#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Karen;
	if (argc != 2)
	{
		Karen.complain("Wrong");
		Karen.complain("ERROR");
	}
	else
	{
		Karen.complain(std::string (argv[1]));
	}
}