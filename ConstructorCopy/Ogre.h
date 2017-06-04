#pragma once
#include <string>

class Ogre
{
public:
	Ogre():Name("Unnamed"),Age(0) { std::cout << "Constructor says: Ogre created" << std::endl; };
	//this is a copy constructor, the const reference is the object instance that we are copying.
	//just as the implicit copy I copy the name value from the "other" instance 
	Ogre(const Ogre& other):Name(other.Name),Age(other.Age) { std::cout << "Constructor says: Ogre created by copying" << std::endl; };
	~Ogre() {};

	void SetName(std::string);
	void SetAge(int);
	void Speak();
private:
	std::string Name;
	int Age;
};


