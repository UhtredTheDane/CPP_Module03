#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
    public:
    
        ScavTrap(std::string name);
        ~ScavTrap(void);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
         
        void guardGate(void);

    private:

        ScavTrap(void);
};
#endif
