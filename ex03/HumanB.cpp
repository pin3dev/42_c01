#include "HumanB.hpp"
#include <string>
#include <iostream>

void	HumanB::attack()
{
	if (this->_weapon)
	{
		std::cout << this->_name 
        << " attacks with their "
        << this->_weapon->getType()
        << std::endl;
		return ;
	}
	std::cerr << RED "[Error]: Weapon not found" RESET
    << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}