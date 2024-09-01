#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		// Init and Destroy
		HumanB(std::string name);
		~HumanB();
		// Getters
		std::string	getName() const;
		Weapon		getWeapon() const;
		// Setters
		void		setName(std::string name);
		void		setWeapon(Weapon *weapon);
		// Functions
		void		attack(void);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
