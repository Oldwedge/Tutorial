#include <iostream>
#include "ADummy.h"

ADummy* CreateADummy(std::string);

int main()
{
	ADummy* PNewADummy = new ADummy();
	PNewADummy->SetName("Pete");
	PNewADummy->Speak();

	delete PNewADummy;

	//create a function that returns a pointer to an object
	ADummy* PNewADummy2 = CreateADummy("Doobie");
	//PNewADummy2->SetName("John");
	PNewADummy2->Speak();

	delete PNewADummy2;

	return 0;
}


