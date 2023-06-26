#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap yugi("Yugi");
    ScavTrap kaiba("Kaiba");
	ScavTrap yugiCopy(c1);
	ScavTrap yamiYugi("Yami Yugi");

    kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
    yugi.beRepaired(1);

	yugi.attack(kaiba.getName());

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.guardGate();
	yugiCopy.beRepaired(20);
	yugiCopy.attack(kaiba.getName());

	yugiCopy = yamiYugi;

	kaiba.attack(yugiCopy.getName());
	yugiCopy.takeDamage(kaiba.getAttackDamage());
	yugiCopy.guardGate();
	yugiCopy.beRepaired(20);
	
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

    return (0);
}