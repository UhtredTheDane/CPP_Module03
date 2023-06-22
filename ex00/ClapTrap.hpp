#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
    public:

        ClapTrap(ClapTrap const& toCopy);
        ClapTrap& operator=(ClapTrap const& toAffect);
        ~ClapTrap(void);

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