#include "FragTrap.hpp"

FragTrap::FragTrap(void)
    : name("FragTrap"),
    hit_points(100),
    energy_points(100),
    attack_damage(30)
{
    std::cout << "I am the FragTrap !" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " is born !" << std::endl;
}

~FragTrap(void)
{
    std::cout << "FragTrap " << name << " is broken." << std::endl;
}

void attack(const std::string& target)
{
    if (hit_points <= 0)
        std::cout << "FragTrap " << name << " is already dead, he can't attack " << target << "." << std::endl;
    else if (energy_points <= 0)
        std::cout << "FragTrap " << name << " has not enough energy points to attack " << target <<"." << std::endl;
    else
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " 
            << attack_damage << " points of damage." << std::endl;
        --energy_points;
    }
}

void takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "FragTrap " << name << " is already dead." << std::endl;
    else
    {
        std::cout << "FragTrap " << name << " takes " << amount << " points of damage." << std::endl;
        hit_points -= amount;
    }
}

void beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "FragTrap " << name << " is already dead, he can't be repaired." << std::endl;
    else if (energy_points <= 0)
        std::cout << "FragTrap " << name << " has not enough energy points to repair." << std::endl;
    else
    {
        std::cout << "FragTrap " << name << " fix himself of " << amount << " hit points." << std::endl;
        hit_points += amount;
        --energy_points;
    }
}

void highFivesGuys(void)
{

}