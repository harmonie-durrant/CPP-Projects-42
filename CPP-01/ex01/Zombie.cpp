#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->getName() << "\n";
	return;
}

std::string	Zombie::getName() const
{
	return this->name;
}

std::string	Zombie::setName(std::string	name)
{
	this->name = name;
	return this->name;
}

void	Zombie::announce() const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ\n";
	return;
}
