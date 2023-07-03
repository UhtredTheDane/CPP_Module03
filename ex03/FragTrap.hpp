/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:23 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/03 17:22:46 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HHP
# define FRAGTRAP_HHP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:

        FragTrap(std::string name);
        FragTrap(FragTrap const& toCopy);
        ~FragTrap(void);
        
        void highFivesGuys(void);

    private:

        FragTrap(void);
        
};
#endif
