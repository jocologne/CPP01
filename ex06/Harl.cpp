
#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG MESSAGE" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO MESSAGE" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING MESSAGE" << std::endl;
}

void Harl::error(void)
{
std::cout << "ERROR MESSAGE" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*functions[i])();
	}
}

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}