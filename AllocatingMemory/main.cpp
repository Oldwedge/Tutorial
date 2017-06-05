#include <iostream>
#include "BDummy.h"
int main()
{
	//most types can be created as new objects
	int* PInt = new int;
	*PInt = 5;
	std::cout << *PInt << std::endl;
	delete PInt;

	BDummy NewBDummy;

	return 0;
}