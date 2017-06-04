#include <iostream>

void ShowMenu();

int main() 
{
	ShowMenu();
	std::cout << "\nEnter a selection: ";
	
	int InputInt = 0;
	std::cin >> InputInt;

	switch (InputInt)
	{
	case 1:
		std::cout << "one" << std::endl;
		break;
	case 2:
		std::cout << "two" << std::endl;
		break;
	case 3:
		std::cout << "three" << std::endl;
		break;
	default:
		std::cout << "N/A" << std::endl;
		break;
	}
	return 0;
}

void ShowMenu()
{
	std::cout << "1. Option 1" << std::endl;
	std::cout << "2. Option 2" << std::endl;
	std::cout << "3. Option 3" << std::endl;
}

