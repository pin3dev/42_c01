#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define GRAY  "\x1b[37m"
#define RED    "\x1b[1;31m"
#define BKGRAY	"\x1b[47;90m"

class Zombie
{
	private :
		std::string	_name;
	public :
		Zombie(std::string name);
		~Zombie();
		void announce(void);
	//void Zombie::setter_name(std::string name)
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif