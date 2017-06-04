#include <iostream>
#include <string>

int main()
{
	std::string PassW = "hello";
	std::cout << "Enter pass: " << std::flush;

	std::string UserInput = "";
	std::cin >> UserInput;

	if (UserInput == PassW)
	{
		std::cout << "\nyay!" << std::flush;
	}

	return 0;
}