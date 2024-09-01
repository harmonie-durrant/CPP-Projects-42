#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "None";
	return;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return;
}

Weapon::~Weapon()
{
	return;
}

std::string	Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
