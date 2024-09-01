#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	return;
}

HumanB::~HumanB()
{
	return;
}

std::string	HumanB::getName() const
{
	return this->name;
}

Weapon HumanB::getWeapon() const
{
	Weapon *weapon = this->weapon;
	return *weapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << this->name << " attacks without a weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
