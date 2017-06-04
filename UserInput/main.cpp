#include <iostream>
#include <string>

int main()
{
	std::string MyInput = "";

	std::cout << "Say something: " << std::flush;

	std::cin >> MyInput;

	std::cout << "\nYou said: " << MyInput << std::flush;

	return 0;
}