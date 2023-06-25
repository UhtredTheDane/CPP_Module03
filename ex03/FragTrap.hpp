#ifndef FRAGTRAP_HHP
# define FRAGTRAP_HHP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:

        FragTrap(std::string name);
        ~FragTrap(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void highFivesGuys(void);

    private:

        FragTrap(void);
        
};
#endif