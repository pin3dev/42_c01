#include "Zombie.hpp"
#include <string>
#include <iostream>

/* static void print_named(int i)
{
	std::cout << BKGRAY 
	<< "Zombie " << i 
	<< " has a name" RESET
	<< std::endl;
} */

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];

	if (zombies == NULL)
	{
		std::cerr 
		<< "[Error]: The horde has no Zombies"
		<< std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		zombies[i] = name;
		//zombies[i].setter_name(name);
		//print_named(i);
	}
	return (zombies);
}