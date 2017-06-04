#include <iostream>
#include <limits>


int main()
{
	int Value = 1;
	int MaxInt = INT_MAX;
	int MinInt = INT_MIN;

	std::cout << "Max int value" << INT_MAX << std::endl;
	std::cout << "Min int value" << INT_MIN << std::endl;

	std::cout << "Max - 1 = " << (MaxInt - Value) << std::endl;
	std::cout << "Max = " << MaxInt << std::endl;
	std::cout << "1 + Max = " << (Value + MaxInt) << std::endl;
	std::cout << "Min = " << (MinInt) << std::endl;
	std::cout << "Min - 1 =" << (MinInt - 1) << std::endl;

	return 0;
}