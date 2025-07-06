
#include "Weapon.hpp"

Weapon::Weapon(std::string wp)
{
	type = wp;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	 return type;
}

void Weapon::setType(std::string wp)
{
	type = wp;
}