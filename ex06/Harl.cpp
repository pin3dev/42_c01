#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

static int find_method(std::string level)
{
	const std::string key_methods[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t i;

	i = 0;
	while(i < 4 && level != key_methods[i])
		i++;
	if (i < 4)
		return (i);
	return (-1);
}

void Harl::complain(std::string level)
{
	int exec = find_method(level);

	switch (exec)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]"
			<< std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << GRAY "[DEBUG]: "
	<< "Identifying issues for precise diagnosis..." RESET
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << CYAN "[INFO]: "
	<< "Normal program execution. Tracking operations for control puposes..." RESET
	<< std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW "[WARNING]: "
	<< "Potential issue detected. It can be handled of ignored, but monitoring is recommended." RESET
	<< std::endl;
}

void Harl::error(void)
{
	std::cout << RED "[ERROR]: "
	<< "Critical failure. Manual intervention required to resolve the issue." RESET
	<< std::endl;
}