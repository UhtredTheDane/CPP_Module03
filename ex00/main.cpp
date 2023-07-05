/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:33:14 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/05 14:33:04 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");
	ClapTrap kaiba("Kaiba");
	ClapTrap makuba("Makuba");
	ClapTrap yugiCopy(yugi);

	std::cout << std::endl;

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	yugi.beRepaired(1);

	std::cout << std::endl;

	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

	std::cout << std::endl;

	makuba.attack(yugi.getName());
	yugi.takeDamage(makuba.getAttackDamage());

	std::cout << std::endl;

	makuba = kaiba;

	std::cout << std::endl;

	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());

	std::cout << std::endl;

	makuba.attack(yugiCopy.getName());

	std::cout << std::endl;
	return (0);
}
