#include "SlavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constrcuor of ScavTrapw " << std::endl;
}

ScavTrap::ScavTrap(std::string cosnt str) : ClapTrap(str)
{
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "Parametrized construcor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default destrcuor of ScavTrapw " << std::endl;
}

void		ScavTrap::attack(std::string const& target)
{  
    if (getHitPoints() > 0 && getEnergyPoints() > 0)
    {
        --this->hitpoints;
        std::cout << "ScavTrappp  " << getName() << "attacks -> " << target << "cusing " << getAttackDamage() << "points of damage " << std::endl;
    }
    else
    {
        std::cout << "The ScavTrap " << getName() << " have no hit point to attack" << target << std::endl;
    }
}

void		ScavTrap::guardGate()
{
    if (!this->guard_mode)
    {
        guard_mode = true;
        std::cout << "The ScavTrap is now in a Gate Mode " << std::endl;
    }
    else
    {
        guard_mode = false;
        std::cout << "The ScavTrap is not in a Gate Mode " << std::endl;       
    }
}

ScavTrap(const ScavTrap& obj)
{
    this->name_ = obj.name_;
    this->hitpoints = obj.hitpoints;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    this->guard_mode = obj.guard_mode;
}

ScavTrap&	operator=(const ScavTrap& obj)
{
    if (this != &obj)
    {
        this->name_ = obj.name_;
        this->hitpoints = obj.hitpoints;
        this->energy_points = obj.energy_points;
        this->attack_damage = obj.attack_damage;
        this->guard_mode = obj.guard_mode;
    }
    return (*this);
}
