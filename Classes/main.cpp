#include <iostream>
#include "Cat.h"
#include "ExtendedCat.h"

Cat Kisse;
ExtendedCat Misse;

int main()
{
	std::cout << "The Kisse cat says " << Kisse.GetSound() << std::endl;
	std::cout << "The Misse cat says " << Misse.GetSound() << " and have " << Misse.GetColour() << " colour." << std::endl;
	return 0;
}