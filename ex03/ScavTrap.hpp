#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
    public:
    
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& toCopy);
        ~ScavTrap(void);
        
        void attack(const std::string& target);
         
        void guardGate(void);

    private:

        ScavTrap(void);
};
#endif
