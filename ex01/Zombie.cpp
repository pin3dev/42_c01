#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie()
{
	/* std::cout << "Zombie without name created" 
	<< std::endl; */
}

Zombie::Zombie(std::string name) : _name(name)
{
	/* std::cout << GRAY
	<< this->_name 
	<< " created" RESET 
	<< std::endl; */
}

Zombie::~Zombie()
{
	/* std::cout << RED 
	<< this->_name 
	<< " destroyed" RESET 
	<< std::endl; */
}

void Zombie::announce(void)
{
	std::cout << GREEN 
	<< this->_name 
	<< ": BraiiiiiiinnnzzzZ..." RESET
	<< std::endl;
}

/* void Zombie::setter_name(std::string name)
{
	this->_name = name;
} */