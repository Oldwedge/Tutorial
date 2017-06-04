#include <iostream>
#include "Person.h"
int main()
{
	Person Gogge;
	std::cout << "Person's name is " << Gogge.GetName() << std::endl;
	Gogge.SetName("Bobby");
	std::cout << "Person's new name is " << Gogge.GetName() << std::endl;
	return 0;
}