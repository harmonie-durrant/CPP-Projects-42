#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		// Init and Destroy
		HumanA(std::string name, Weapon *weapon);
		~HumanA();
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
