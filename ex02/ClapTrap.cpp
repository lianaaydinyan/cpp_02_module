#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout << "Default constrcuor of ClapTrap " << std::endl;
}

ClapTrap::ClapTrap(std::string const str) 
{
    this->name_ = str;
    this->hitpoints = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "Parametrized construcor of ClapTrap called" << std::endl;
}

std::string ClapTrap::getName(void)  
{
    return (this->name_);
}

int			ClapTrap::getHitPoints(void)  
{
    return (this->hitpoints);
}

int			ClapTrap::getEnergyPoints(void)  
{
    return (this->energy_points);
}
int			ClapTrap::getAttackDamage(void)  
{
    return (this->attack_damage);
}

void		ClapTrap::setName(std::string const & str)
{
    this->name_ = str;
}

void		ClapTrap::setHitPoints(int hitpoints)
{
    this->hitpoints = hitpoints;
}

void		ClapTrap::setEnergyPoints(int energypoints)
{
    this->energy_points = energypoints;
}

void		ClapTrap::setAttackDamage(int attackdamage)
{
    this->attack_damage = attackdamage;
}

void		ClapTrap::attack(std::string const& target)
{  
    if (getHitPoints() > 0 && getEnergyPoints() > 0)
    {
        --this->hitpoints;
        std::cout << "ClapTrap " << getName() << "attacks" << target << "cusing " << getAttackDamage() << "points of damage " << std::endl;
    }
    else
    {
        std::cout << "The " << getName() << " have no hit point to attack" << target << std::endl;
    }
}

void		ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() - amount < 0)
    {
        std::cout << "There is no enogth hitPoints to take damage" << std::endl;
    }
    else if (getHitPoints() - amount == 0)
    {
        std::cout << " The ClapTrap " << getName() << " died" << std::endl;
    }
    else
    {
        std::cout << "The ClapTrap " << getName() << "take damage " << amount << " points" << std::endl;
        this->hitpoints -=amount; 
    }

}

void		ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "The ClapTrap  " << getName() << " gets" << amount << "points to its health" << std::endl;
    this->hitpoints += amount;
}


ClapTrap::~ClapTrap()
{
    std::cout << "Default destrucor called" << std::endl;
}

//copy constrctor 
ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Copy construcor called" << std::endl;
    this->name_ = obj.name_;
    this->hitpoints = obj.hitpoints;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}

//copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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
