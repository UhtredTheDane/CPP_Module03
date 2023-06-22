#include "ClapTrapp.cpp"

ClapTrap::ClapTrap(void) 
    : name("ClapTrap"),
    hit_points(10), 
    energy_points(10), 
    attack_damage(0)
{

}

ClapTrap::ClapTrap(ClapTrap const& toCopy)
    : name(toCopy.name);
    hit_points(toCopy.hit_points),
    energy_points(toCopy.energy_points);
    attack_damage(toCopy.attack_damage)
{

}

ClapTrap::ClapTrap& operator=(ClapTrap const& toAffect)
{
    if (this != &toAffect)
    {
        name = toAffect.name;
        hit_points = toAffect.hit_points;
        energy_points = toAffect.energy_points;
        attack_damage = toAffect.attack_damage;
    }
    return(*this);
}

ClapTrap::~ClapTrap(void)
{

}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "ClapTrap " << name " attacks " << target << ", causing " 
            << attack_damage << " points of damage !" << std::endl;
        --energy_points;
    }
    else
        std::cout << "I have not enough mana" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage !" << std::endl;
    hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "ClapTrap " << name << " fix himself of " << amount << " hit points !" << std::endl;
        hit_points += amout;
        --energy_points;
    }
    else
        std::cout << "I have not enough mana" << std::endl;
}