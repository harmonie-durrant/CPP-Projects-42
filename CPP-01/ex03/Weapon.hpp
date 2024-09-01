#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
#include <iostream>

class Weapon
{
	public:
		// Init and Destroy
		Weapon();
		Weapon(std::string type);
		~Weapon();
		// Getters
		std::string	getType() const;
		// Setters
		void		setType(std::string type);
		// Functions
	private:
		std::string	type;
};

#endif
