#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	Name = "ClapTrap";
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->Name = copy.Name;
	this->Hitpoints = copy.Hitpoints;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
}

// Destructor
ClapTrap::~ClapTrap()
{
	return ;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->Name = assign.Name;
	this->Hitpoints = assign.Hitpoints;
	this->Energy_points = assign.Energy_points;
	this->Attack_damage = assign.Attack_damage;
	return *this;
}

// Actions
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount)
{
	std::cout << "ClapTrap " << Name << " takes " << ammount << " points of damage!" << std::endl;
	this->setHitpoints(Hitpoints - ammount);
}

void ClapTrap::beRepaired(unsigned int ammount)
{
	std::cout << "ClapTrap " << Name << " has been repaired for " << ammount << " points!" << std::endl;
	this->setHitpoints(Hitpoints + ammount);
}

// Getters
std::string ClapTrap::getName()
{
	return Name;
}

int ClapTrap::getHitpoints()
{
	return Hitpoints;
}

int ClapTrap::getEnergy_points()
{
	return Energy_points;
}

int ClapTrap::getAttack_damage()
{
	return Attack_damage;
}

// Setters
void ClapTrap::setName(std::string Name)
{
	this->Name = Name;
}

void ClapTrap::setHitpoints(int Hitpoints)
{
	this->Hitpoints = Hitpoints;
}

void ClapTrap::setEnergy_points(int Energy_points)
{
	this->Energy_points = Energy_points;
}

void ClapTrap::setAttack_damage(int Attack_damage)
{
	this->Attack_damage = Attack_damage;
}
