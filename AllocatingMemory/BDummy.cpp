#include "BDummy.h"
#include <iostream>
#include <string>

void BDummy::SetName(std::string Name)
{
	this->Name = Name;
}

void BDummy::Speak()
{
	std::cout << "My name is " << Name << std::endl;
}
