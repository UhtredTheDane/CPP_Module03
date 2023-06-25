#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap c1("Yugi");
    ClapTrap c2("Kaiba");
  	ClapTrap c3("Makuba");
	ClapTrap c4(c1);
	
    c2.attack(c1.getName());
    c1.beRepaired(1);
	c3 = c2;
	c4.attack(c2.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());
	c3.attack(c1.getName());

    return (0);
}
