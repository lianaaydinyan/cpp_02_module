#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name_;
		int			hitpoints;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string const str);
		~ClapTrap();
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		void		attack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		// getters
		std::string getName(void)  ;
		int			getHitPoints(void)  ;
		int			getEnergyPoints(void)  ;
		int			getAttackDamage(void)  ;
		// setters
		void		setName(std::string const & str);
		void		setHitPoints(int hitpoints);
		void		setEnergyPoints(int energypoints);
		void		setAttackDamage(int attackdamage);
};

#endif