#include <iostream>

int main()
{
	for (int i = 0; i <= 5; i++)
	{
		std::cout << "i is: " << i << std::flush;

		if (i == 3)
		{
			break;
		}

		std::cout << ", looping." << std::endl;
	}

	std::cout << ", going to next loop due to break." << std::endl;

	for (int i = 0; i <= 5; i++)
	{
		
		if (i == 3)
		{
			std::cout << "skipping print out of " << i; 
			std::cout << " due to continue" << std::endl;
			continue;
		}

		std::cout << "i is: " << i << std::flush;

		std::cout << ", looping." << std::endl;
	}


	return 0;
}