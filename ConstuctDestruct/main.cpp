#include <iostream>
#include "Cat.h"

int main()
{
	std::cout << "Staring program... " << std::endl;

	for (int i = 0; i < 5; i++)
	{
		char c = (i+35);

		{ //brackets to destroy Cat instance after use
			Cat Kisse;
			std::string Name = Kisse.GetName() + c;
			Kisse.SetName(Name);
			Kisse.speak();
		} //brackets to destroy Cat instance after use
	}
	std::cout << "Ending program... " << std::endl;
	return 0;
}