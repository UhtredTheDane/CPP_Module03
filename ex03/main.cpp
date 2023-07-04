/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:02:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/04 17:15:42 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");	
	DiamondTrap	exodia("Exodia");
	DiamondTrap	yamiYugi(exodia);
	DiamondTrap	test("test");

	std::cout << std::endl;

	exodia.whoAmI();
	exodia.beRepaired(10);	
	
	DiamondTrap exodiaCopy(exodia);

	exodia.guardGate();
	
	std::cout << std::endl;
	
	test = exodia;
	test.guardGate();
	
	std::cout << std::endl;
	
	return (0);
}
