#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	Pistol("Pistol");
	HumanA	Carl("Carl", Pistol);

	HumanB	David("David");

	Carl.attack();
	David.attack();

	std::cout << "Carl's Pistol has turned into an Orange!\n";
	Pistol.setType("Orange");
	Carl.attack();
	std::cout << "Carl has picked up 'Barbed Wire' instead!\n";
	Weapon	BarbedWire("Barbed Wire");
	Carl.equip(BarbedWire);

	Weapon	DanceMoves("Dance moves");
	David.equip(DanceMoves);
	
	Carl.attack();
	David.attack();

}