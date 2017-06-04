#include <iostream>
#include "Dog.h"

void Dog::SetName(std::string Name)
{
	this->Name = Name;
}

void Dog::Speak()
{
	std::cout << "My name is " << Name << std::endl;
}
