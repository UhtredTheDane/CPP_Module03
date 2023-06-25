#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
    : name("ClapTrap"),
    hit_points(10), 
    energy_points(10), 
    attack_damage(0)
{
    std::cout << "I am the ClapTrap !"<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name),
    hit_points(10), 
    energy_points(10), 
    attack_damage(0)
{
    std::cout << "ClapTrap " << name << " is born !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& toCopy)
	: name(toCopy.name),
    hit_points(toCopy.hit_points),
    energy_points(toCopy.energy_points),
    attack_damage(toCopy.attack_damage)
{
    std::cout << "Copy of the CalpTrap " << name << "." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& toAffect)
{
    if (this != &toAffect)
    {
        std::cout << "ClapTrap " << toAffect.name << " is affect to ClapTrap " << name  << "." << std::endl;
        name = toAffect.name;
        hit_points = toAffect.hit_points;
        energy_points = toAffect.energy_points;
        attack_damage = toAffect.attack_damage;
    }
    else
        std::cout << "ClapTrap " << name << " can't afffect himself."  << std::endl;
    return(*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is broken." << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (name);
}

void ClapTrap::attack(const std::string& target)
{   
    if (hit_points <= 0)
        std::cout << "ClapTrap " << name << " is already dead, he can't attack " << target << "." << std::endl;
    else if (energy_points <= 0)
        std::cout << "ClapTrap " << name << " has not enough energy points to attack " << target <<"." << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " 
            << attack_damage << " points of damage." << std::endl;
        --energy_points;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "ClapTrap " << name << " is already dead." << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage." << std::endl;
        hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "ClapTrap " << name << " is already dead, he can't be repaired." << std::endl;
    else if (energy_points <= 0)
        std::cout << "ClapTrap " << name << " has not enough energy points to repair." << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " fix himself of " << amount << " hit points." << std::endl;
        hit_points += amount;
        --energy_points;
    }

}
