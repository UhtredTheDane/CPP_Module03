#ifndef FRAGTRAP_HHP
# define FRAGTRAP_HHP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:

        FragTrap(std::string name);
        FragTrap::FragTrap(FragTrap const& toCopy);
        ~FragTrap(void);

        void attack(const std::string& target);
        
        void highFivesGuys(void);

    private:

        FragTrap(void);
        
};
#endif