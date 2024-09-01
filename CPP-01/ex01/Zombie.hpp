#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie
{
	public:
		// Init and Destroy
		Zombie();
		~Zombie();
		// Getters
		std::string	getName() const;
		// Setters
		std::string	setName(std::string name);
		// Functions
		void		announce() const;
		
	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
