#include <iostream>
int main()
{
	const std::string Word = "Martin";

	for (int i =0;i < 10;i++)
	{
		std::cout << "Hi " << i << std::endl;
	}
		for (auto Word : Word)
	{
		//do stuff?
		std::cout << Word << std::endl;
	}
	return 0;


}