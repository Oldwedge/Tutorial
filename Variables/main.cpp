#include <iostream>

int main()
{
	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;
	
	std::cout << "Cats " << numberCats << std::endl;
	std::cout << "Dogs " << numberDogs << std::endl;
	std::cout << "Animals " << numberAnimals << std::endl;

	return 0;
}