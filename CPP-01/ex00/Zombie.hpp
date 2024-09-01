#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie
{
	public:
		// Init and Destroy
		Zombie(std::string	name);
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
void	randomChump(std::string name);

#endif
