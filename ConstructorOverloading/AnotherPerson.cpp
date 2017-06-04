#include <sstream>
#include "AnotherPerson.h"

std::string AnotherPerson::GetPersonData()
{
	std::stringstream Data;
	Data << "Name: " << Name << "; Age: " << Age;
	return Data.str();
}
