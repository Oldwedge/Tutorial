#include <sstream>
#include "Xperson.h"

std::string Xperson::ToString()
{
	std::stringstream Info; 
	Info << "Name = " << Name << ", " << "Age = " << Age;
	return Info.str();
}
