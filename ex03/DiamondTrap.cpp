/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:01:39 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 10:36:06 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("DiamondTrap_clap_name")
{
	name = "DiamondTrap";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 30;
	isGuardMod = false;	
	std::cout << "I am the DiamondTrap !"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	name(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 30;
	isGuardMod = false;
	std::cout << "DiamondTrap " << name << " is born !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& toCopy)
	: ClapTrap(),
	ScavTrap(),
	FragTrap()
{
	std::cout << "Copy of the DiamondTrap " << toCopy.name << "." << std::endl;
	*this = toCopy;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& toAffect)
{
	if (this != &toAffect)
	{	
		std::cout << "DiamondTrap " << toAffect.name << " is affect to DiamondTrap " << ClapTrap::name  << "." << std::endl;
		ClapTrap::name = toAffect.ClapTrap::name;	
		name = toAffect.name;
		hit_points = toAffect.hit_points;
		energy_points = toAffect.energy_points;
		attack_damage = toAffect.attack_damage;
		isGuardMod = toAffect.isGuardMod;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << name << " is broken." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	if (hit_points > 0)
	{
		std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << "." << std::endl;
		std::cout << "hit_points: " << hit_points << std::endl;
		std::cout << "energy_points:" << energy_points << std::endl;
		std::cout << "attack_damage: " << attack_damage << std::endl;
	}
	else
		std::cout << "DiamondTrap " << name << " can't talk because he is dead !" << std::endl;
}
