#include <iostream>
#include <string> //IMPORTANTE!!! appears to be required to cout array contents

std::string MultiFunction();

int main()
{

	int InitZeroArray[4] = {};
	int InitSizedArray[] = { 10,20,30 };

	std::cout << InitSizedArray[0] << std::endl;
	std::cout << InitSizedArray[1] << std::endl;
	std::cout << InitSizedArray[2] << std::endl;

	std::string TextArray[] = { "My","Name","Is" };

	//bad idea, access "out of range" give garbage
	std::cout << InitSizedArray[4] << std::endl;

	std::string Number = MultiFunction();

	std::cout << "returned string = " << Number << std::endl;

	return 0;
}

std::string MultiFunction()
{
	std::string MultiStringer[2][3] = { { "one","two","three" },{ "four","five","six" } };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << MultiStringer[i][j] << std::endl;
		}
	}
	return MultiStringer[1][2];
}
