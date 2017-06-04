#include <iostream>
#include <string>

int main()
{
	int Values[] = { 4, 7, 3, 4 };

	std::cout << sizeof(Values) << std::endl;
	std::cout << sizeof(int) << std::endl;

	for (int i = 0; i<sizeof(Values)/sizeof(int);i++)
	{
		std::cout << Values[i] << std::endl;
	}

	int Values2D[][3] = 
	{ 
		{ 4, 7, 1},
		{ 3, 4, 8 } 
	};

	int ArrayRows = sizeof(Values2D)/sizeof(Values2D[0]);

	std::cout << "rows = " << ArrayRows << std::endl;

	int ArrayCols = sizeof(Values2D[0])/sizeof(int);

	std::cout << "\ncols = " << ArrayCols << std::endl;

	for (int i = 0; i < ArrayRows; i++)
	{
		for (int j = 0; j < ArrayCols; j++) 
		{
			std::cout << "i = " << i << " j = " << j << " [i][j] = " << Values2D[i][j] << std::endl;
		}
	}
	return 0;
}
