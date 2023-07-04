/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:37:39 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/04 15:51:16 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& toCopy);
		~ScavTrap(void);

		void attack(const std::string& target);

		void guardGate(void);

	protected:

		bool	isGuardMod;
		ScavTrap(void);

};
#endif
