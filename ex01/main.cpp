/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:39:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/30 16:37:27 by agengemb         ###   ########.fr       */
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

	std::cout << std::endl;

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	yugi.beRepaired(1);

	std::cout << std::endl;
	
	yugi.attack(kaiba.getName());
	kaiba.takeDamage(yugi.getAttackDamage());

	std::cout << std::endl;
	
	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	
	std::cout << std::endl;
	
	kaiba.attack(yamiYugi.getName());
	yamiYugi.takeDamage(kaiba.getAttackDamage());
	yamiYugi.guardGate();
	yamiYugi.beRepaired(20);
	yamiYugi.attack(kaiba.getName());

	std::cout << std::endl;
	
	yugiCopy = yamiYugi;

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.guardGate();
	yugiCopy.beRepaired(20);

	std::cout << std::endl;
	
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

	std::cout << std::endl;
	return (0);
}
