#include "Person.h"

//constructor
Person::Person()
{
	Name = "George";
}

std::string Person::GetName()
{
	return Name;
}

void Person::SetName(std::string NewName)
{
	Name = NewName;
}

