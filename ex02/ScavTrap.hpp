/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:37:39 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 09:54:49 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& toCopy);
		ScavTrap& operator=(ScavTrap const& toAffect);
		~ScavTrap(void);

		void attack(const std::string& target);

		void guardGate(void);

	private:

		bool	isGuardMod;

		ScavTrap(void);

};
#endif
