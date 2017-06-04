#include <iostream>
int main()
{
	int NumberOfSeconds = 19273611;
	int WholeHours = NumberOfSeconds / 3600;
	int RemainderSeconds = NumberOfSeconds % 3600;

	int WholeMinutes = RemainderSeconds / 60;
	RemainderSeconds = RemainderSeconds % 60;

	std::cout << NumberOfSeconds << " seconds = " << WholeHours << " hour(s), ";
	std::cout << WholeMinutes << " minutes, and " << RemainderSeconds << " seconds" << std::endl;

	int TotalSeconds = (WholeHours * 3600) + (WholeMinutes * 60) + RemainderSeconds;

	std::cout << "Original number of seconds was: " << TotalSeconds << std::endl;
	
	return 0;
}