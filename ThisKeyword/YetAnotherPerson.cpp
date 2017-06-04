#include "YetAnotherPerson.h"

//'this->Name' makes sure i set the value of the instance variable
//'Name = "apa"' only sets the value in this isolated function (see difference with using SetName2(..))
void YetAnotherPerson::SetName(std::string Name)
{
	this->Name = Name;
}

//the instance variable will not be changed (see difference with using SetName(..))
void YetAnotherPerson::SetName2(std::string Name)
{
	Name = Name;
}

void YetAnotherPerson::SetAge(int NewAge)
{
	Name = NewAge;
}

std::string YetAnotherPerson::GetName()
{
	return Name;
}

int YetAnotherPerson::GetAge()
{
	return Age;
}
