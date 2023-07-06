/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:02:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 10:36:31 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap	yugi("Yugi");
	std::cout << std::endl;
	DiamondTrap	exodia("Exodia");		
	std::cout << std::endl;
	DiamondTrap	kaiba("Kaiba");
	std::cout << std::endl;
	DiamondTrap	makuba("Makuba");
	std::cout << std::endl;

	exodia.whoAmI();
	exodia.beRepaired(10);	
	exodia.guardGate();
	exodia.highFivesGuys();

	std::cout << std::endl;

	DiamondTrap	exodiaCopy(exodia);

	std::cout << std::endl;

	exodiaCopy.whoAmI();
	exodiaCopy.beRepaired(10);	
	exodiaCopy.guardGate();
	exodiaCopy.highFivesGuys();
	std::cout << std::endl;

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());

	std::cout << std::endl;

	makuba = kaiba;

	std::cout << std::endl;

	exodiaCopy.attack(makuba.getName());
	makuba.takeDamage(exodiaCopy.getAttackDamage());

	std::cout << std::endl;	
	return (0);
}
