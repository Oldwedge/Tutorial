#include <iostream>
#include <string>

int main()
{

	std::string Text1 = "Hello ";
	std::string Text2 = "Fred";
	std::string Text3 = Text1 + Text2;

	std::cout << Text1 << std::endl;
	std::cout << Text2 << std::endl;
	std::cout << Text3 << std::endl;

	return 0;
}