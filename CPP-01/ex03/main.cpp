#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon *club = new Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club->setType("some other type of club");
	bob.attack();
	delete club;

	std::cout << "--- NEW ATTACK ---" << std::endl;
	
	Weapon *club2 = new Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club2);
	jim.attack();
	club2->setType("some other type of club");
	jim.attack();
	delete club2;
	return 0;
}
