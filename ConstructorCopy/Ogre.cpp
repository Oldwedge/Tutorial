#include <iostream>
#include "Ogre.h"

void Ogre::SetName(std::string Name)
{
	this->Name = Name;
}

void Ogre::SetAge(int Age)
{
	this->Age = Age;
}

void Ogre::Speak()
{
	std::cout << "My name is " << Name << ", I am " << Age << " years old." <<  std::endl;
}
