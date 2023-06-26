#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap yugi("Yugi");
	ClapTrap kaiba("Kaiba");
	ClapTrap makuba("Makuba");
	ClapTrap yugiCopy(yugi);

	std::cout << std::endl;

	kaiba.attack(yugi.getName());
	yugi.takeDamage(kaiba.getAttackDamage());
	yugi.beRepaired(1);

	std::cout << std::endl;
	
	yugiCopy.attack(kaiba.getName());
	kaiba.takeDamage(yugiCopy.getAttackDamage());

	
	std::cout << std::endl;
	
	makuba.attack(yugi.getName());
	yugi.takeDamage(makuba.getAttackDamage());


	std::cout << std::endl;
	
	makuba = kaiba;

	std::cout << std::endl;
	
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
	yugiCopy.takeDamage(makuba.getAttackDamage());
	
	std::cout << std::endl;
	
	makuba.attack(yugiCopy.getName());

	std::cout << std::endl;
	return (0);
}
