#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "Parametrized construcor of FragTrap called" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "Default constrcuor of FragTrap " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Default destrcuor of FragTrap " << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    this->name_ = obj.name_;
    this->hitpoints = obj.hitpoints;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}

FragTrap::FragTrap operator=(const FragTrap& obj)
{
    if (this != &obj)
    {
        this->name_ = obj.name_;
        this->hitpoints = obj.hitpoints;
        this->energy_points = obj.energy_points;
        this->attack_damage = obj.attack_damage;
    }
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    std::string request;
}