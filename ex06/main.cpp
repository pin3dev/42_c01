#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
        std::cerr << RED "[Error]: Option not valid!" RESET << std::endl;
        std::cout << GRAY "Try: ./harl <level>" RESET << std::endl;
        return (1);
	}

	harl.complain(argv[1]);
	return (0);
}