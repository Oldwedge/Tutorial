#include <iostream>
#include <string>
#include "Cat.h"


//Note: Constructor can also be defined in public section of .h file
Cat::Cat()
{
	std::cout << "Cat created." << std::endl;
}

//Note: Destructor can also be defined in public section of .h file
Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}


void Cat::speak()
{
	if (bHappy)
	{
		std::cout << CatName << " says meeoow!" << std::endl;
	}
	else
	{
		std::cout << CatName << " says sssss!" << std::endl;
	}
}

std::string Cat::GetName()
{
	return CatName;
}

void Cat::SetName(std::string NameIsSet)
{
	CatName = NameIsSet;
}
