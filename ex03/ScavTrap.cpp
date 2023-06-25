#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
    : name("ScavTrap"),
    hit_points(100), 
    energy_points(50), 
    attack_damage(20)
{
    std::cout << "I am the ScavTrap !"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " is born !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << name << " is broken." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points <= 0)
        std::cout << "ScavTrap " << name << " is already dead, he can't attack " << target << "." << std::endl;
    else if (energy_points <= 0)
        std::cout << "ScavTrap " << name << " has not enough energy points to attack " << target <<"." << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " 
            << attack_damage << " points of damage." << std::endl;
        --energy_points;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "ScavTrap " << name << " is already dead." << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " takes " << amount << " points of damage." << std::endl;
        hit_points -= amount;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "ScavTrap " << name << " is already dead, he can't be repaired." << std::endl;
    else if (energy_points <= 0)
        std::cout << "ScavTrap " << name << " has not enough energy points to repair." << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " fix himself of " << amount << " hit points." << std::endl;
        hit_points += amount;
        --energy_points;
    }
}

void ScavTrap::guardGate(void)
{
    if (hit_points <= 0)
        std::cout << "ScavTrap " << name << " is dead, he can't switch his mode." << std::endl;
    else
        std::cout << "ScavTrap " << name << " enters Gate keeper mode." << std::endl;
}