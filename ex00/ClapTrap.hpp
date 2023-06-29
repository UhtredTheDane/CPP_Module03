/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:30:50 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/29 20:31:17 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:

        ClapTrap(std::string name);
	ClapTrap(ClapTrap const& toCopy);
        ClapTrap& operator=(ClapTrap const& toAffect);
        ~ClapTrap(void);
	
        int getAttackDamage(void);
	std::string getName(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:

        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;

        ClapTrap(void);

};
#endif
