/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:39:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/03 18:09:13 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");
	ScavTrap kaiba("Kaiba");
	FragTrap yamiYugi("Yami Yugi");
	FragTrap yugiCopy(yamiYugi);

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
	yamiYugi.highFivesGuys();
	yamiYugi.beRepaired(20);
	yamiYugi.attack(kaiba.getName());

	std::cout << std::endl;

	yugiCopy = yamiYugi;

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.highFivesGuys();
	yugiCopy.beRepaired(20);

	std::cout << std::endl;

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());

	std::cout << std::endl;

	yugiCopy.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
