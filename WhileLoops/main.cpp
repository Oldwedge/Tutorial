#include <iostream>

void MessWithLoopCounter(int);

int LoopCounter = 1;

int main()
{
	//while
	
	while (LoopCounter <= 12)
	{
		std::cout << "A " << LoopCounter << std::endl;
		MessWithLoopCounter(LoopCounter);
		LoopCounter++;
	}

	//do while
	LoopCounter = 1;
	do
	{
		std::cout << "B " << LoopCounter << std::endl;
		MessWithLoopCounter(LoopCounter);
		LoopCounter++;
	} 
	while (LoopCounter <= 12);

	return 0;
}

void MessWithLoopCounter(int CounterX)
{
	LoopCounter = LoopCounter*2;
}
