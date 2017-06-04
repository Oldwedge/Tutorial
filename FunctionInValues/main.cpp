#include <iostream>
#include <string> //IMPORTANTE!!! appears to be required to cout array contents

std::string GetMultiFunctionValue(int,int);
int GetUserInput();

int ValueOne = 0;
int ValueTwo = 0;

int main()
{
	std::cout << "Enter 1 or 2: >" << std::flush;
	
	ValueOne = GetUserInput();
	std::cout << "Enter 1, 2 or 3: >" << std::flush;
	
	ValueTwo = GetUserInput();

	std::string Number = GetMultiFunctionValue(ValueOne,ValueTwo);

	std::cout << "returned string = " << Number << std::endl;

	return 0;
}

int GetUserInput()
{
	int Value = 0;
	std::cin >> Value;
	return (Value-1);
}

std::string GetMultiFunctionValue(int One, int Two)
{
	std::string MultiStringer[2][3] = { { "one","two","three" },{ "four","five","six" } };

	return MultiStringer[One][Two];
}

