#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap claptrap;
	ClapTrap claptrap2;

	(void)argc;
	(void)argv;
	claptrap = ClapTrap("ClapTrap");
	claptrap2 = ClapTrap("target");
	claptrap.attack("target");
	return 0;
}
