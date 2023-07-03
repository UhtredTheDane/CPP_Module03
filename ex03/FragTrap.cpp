/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:29 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/03 17:31:15 by agengemb         ###   ########.fr       */
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
    : ClapTrap(toCopy)
{
    std::cout << "Copy of the FragTrap " << name << "." << std::endl;
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
