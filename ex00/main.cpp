#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap c1("Yugi");
    ClapTrap c2("Kaiba");
    
    c2.attack(c1.getName());
    c1.beRepaired(1);

    return (0);
}