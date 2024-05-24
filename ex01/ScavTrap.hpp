#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
		bool		guard_mode;
    public:
		ScavTrap();
        ScavTrap(std::string cosnt & str);
        ~ScavTrap();
		void		attack(std::string const& target);
		void		guardGate();
		ScavTrap(const ScavTrap& obj);
		ScavTrap&	operator=(const ScavTrap& obj);



};



#endif