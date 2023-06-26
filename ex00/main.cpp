#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap yugi("Yugi");
    ClapTrap kaiba("Kaiba");
  	ClapTrap makuba("Makuba");
	ClapTrap yugiCopy(c1);
	
    kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
    yugi.beRepaired(1);
	
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

	makuba.attack(yugi.getName());
	yugi.takeDamage(makuba.getAttackDamage());

	makuba = kaiba;

	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	makuba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(makuba.getAttackDamage());
	
	makuba.attack(yugiCopy.getName());
	makuba.attack(yugiCopy.getName());

    return (0);
}
