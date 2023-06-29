/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:39:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/29 21:37:39 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");
	ScavTrap kaiba("Kaiba");
	ScavTrap yamiYugi("Yami Yugi");
	ScavTrap yugiCopy(yamiYugi);

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	yugi.beRepaired(1);

	yugi.attack(kaiba.getName());

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.guardGate();
	yugiCopy.beRepaired(20);
	yugiCopy.attack(kaiba.getName());

	yugiCopy = yamiYugi;

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.guardGate();
	yugiCopy.beRepaired(20);

	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

	return (0);
}
