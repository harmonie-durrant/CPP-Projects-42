#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &copy);
		
		// Destructor
		~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Actions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// Getters
		std::string getName();
		int getHitpoints();
		int getEnergy_points();
		int getAttack_damage();

		// Setters
		void setName(std::string Name);
		void setHitpoints(int Hitpoints);
		void setEnergy_points(int Energy_points);
		void setAttack_damage(int Attack_damage);

	private:
		std::string Name;
		int Hitpoints;
		int Energy_points;
		int Attack_damage;
};

#endif