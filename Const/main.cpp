#include "Animal.h"

int main()
{
	//declaring const
	const int PI = 3.141592;
	std::cout << "Pi = " << PI << std::endl;

	//---------------------------------------

	Animal NewAnimal;
	NewAnimal.SetName("Barney");
	NewAnimal.speak();

	//---------------------------------------

	
	int Value = 8;
	int* PValue = &Value;
	std::cout << "Memory location : " << PValue << ", value stored: " << *PValue << std::endl;

	//example of how values can change (somtimes without your intention)
	int Number = 11;
	//pointing the pointer to a new memory address
	PValue = &Number;
	std::cout << "Memory location : " << PValue << ", value stored: " << *PValue << std::endl;

	//directly changing the value in the memory address
	*PValue = 12;
	std::cout << "Memory location : " << PValue << ", value stored: " << *PValue << std::endl;

	//to manage this we can use const in the declaration
	//the following means "pointer to a const int",
	//in other words the value in the memory can not be changed through this pointer:
	const int* PValue1 = &Value;
	
	//now this is not allowed
	// *pValue1 = 15;
	
	//but I can still change the address that I'm pointing at
	PValue1 = &Number;

	std::cout << *PValue1 << std::endl;

	//let's try this "const pointer to an int"
	int* const PValue2 = &Value;

	//now I can do this is allowed since the int isn't const anymore
	*PValue2 = 15;

	//but I'm not allowed to direct the pointer to another address
	// pValue2 = &Number;

	//let's buckle up
	const int* const PValue3 = &Value;

	std::cout << *PValue2 << std::endl;
	std::cout << *PValue3 << std::endl;



	return 0;
}