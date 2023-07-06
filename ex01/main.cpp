/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:39:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 09:52:27 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");
	ScavTrap kaiba("Kaiba");
	ScavTrap kaibaCopy(kaiba);
	ScavTrap yamiYugi("Yami Yugi");
	ScavTrap yamiYugi2("Yami Yugi 2");

	std::cout << std::endl;

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	yugi.beRepaired(1);

	std::cout << std::endl;

	yugi.attack(kaiba.getName());
	kaiba.takeDamage(yugi.getAttackDamage());

	std::cout << std::endl;

	kaibaCopy.attack(yugi.getName());
	yugi.takeDamage(kaibaCopy.getAttackDamage());

	std::cout << std::endl;

	kaibaCopy.attack(yamiYugi.getName());
	yamiYugi.takeDamage(kaibaCopy.getAttackDamage());
	yamiYugi.guardGate();
	yamiYugi.beRepaired(20);
	yamiYugi.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi.getAttackDamage());

	std::cout << std::endl;

	yamiYugi2 = yamiYugi;

	kaibaCopy.attack(yamiYugi2.getName());
	yamiYugi2.takeDamage(kaibaCopy.getAttackDamage());
	yamiYugi2.guardGate();
	yamiYugi2.beRepaired(20);

	std::cout << std::endl;

	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());
	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());
	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());
	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());
	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());
	
	std::cout << std::endl;
	
	yamiYugi2.attack(kaiba.getName());
	kaiba.takeDamage(yamiYugi2.getAttackDamage());

	std::cout << std::endl;
	return (0);
}
