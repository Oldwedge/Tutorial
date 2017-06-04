#include <iostream>
int main()
{
	int TwelveArray[12][12] = {};

	for (int i = 1; i < 13; i++)
	{
		
		for (int j = 1; j < 13; j++)
		{
			if (i == 12 && j == 5) 
			{ 
				int Bert = 0; 
			}
			TwelveArray[(i-1)][(j-1)] = (i * j);
			std::cout << "Array[" << i << "][" << j; 
			std::cout << "] (i*j) = " << TwelveArray[(i-1)][(j-1)] << std::endl;
		}
		
	}

	return 0;
}