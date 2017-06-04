#include <string>
#include "Animal.h"

void Animal::SetName(std::string name)
{
	this->name = name;
}

void Animal::speak() const
{
	std::cout << "My name is " << name << std::endl;
}
