/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:01:44 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/04 16:22:21 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& toCopy);
	DiamondTrap& operator=(DiamondTrap const& toAffect);
	~DiamondTrap(void);

	void	attack(const std::string& target);
	void	whoAmI(void);

    private:

	std::string	name;
	DiamondTrap(void);
};

#endif
