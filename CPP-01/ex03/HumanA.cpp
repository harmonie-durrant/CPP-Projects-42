#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
	return;
}

HumanA::~HumanA()
{
	return;
}

std::string	HumanA::getName() const
{
	return this->name;
}

Weapon HumanA::getWeapon() const
{
	Weapon *weapon = this->weapon;
	return *weapon;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

void HumanA::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void HumanA::attack()
{
	if (!this->weapon)
	{
		std::cout << this->name << " attacks without a weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
