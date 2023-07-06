/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:29 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 10:10:05 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	name = "FragTrap";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
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

FragTrap::FragTrap(FragTrap const& toCopy)
	: ClapTrap()
{
	std::cout << "Copy of the FragTrap " << toCopy.name << "." << std::endl;
	*this = toCopy;
}

FragTrap&	FragTrap::operator=(FragTrap const& toAffect)
{
	if (this != &toAffect)
	{
		std::cout << "FragTrap " << toAffect.name << " is affect to FragTrap " << name  << "." << std::endl;
		name = toAffect.name;
		hit_points = toAffect.hit_points;
		energy_points = toAffect.energy_points;
		attack_damage = toAffect.attack_damage;
	}
	else
		std::cout << "FragTrap " << name << " can't afffect himself."  << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << name << " is broken." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (hit_points <= 0)
		std::cout << "FragTrap " << name << " is dead, he can't make a high five." << std::endl;
	else
		std::cout << "FragTrap " << name << " would like to do a high five !" << std::endl;
}
