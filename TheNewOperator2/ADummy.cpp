#include <iostream>
#include <string>
#include "ADummy.h"

void ADummy::SetName(std::string Name)
{
	this->Name = Name;
}

void ADummy::Speak()
{
	std::cout << "My name is " << Name << std::endl;
}

//function that returns a pointer to an object
ADummy* CreateADummy(std::string Name)
{
	ADummy* PThisDummy = new ADummy();
	PThisDummy->SetName(Name);
	return PThisDummy;
}