#include <iostream>

/*
== equals test
!= not equals test
< less than
> greater than
*/


int main()
{
	int Value1 = 7;
	int Value2 = 4;

	if (Value1 >= 5)
	{
		std::cout << "Condition 1 : true" << std::endl;
	}
	else
	{
		std::cout << "Condition 1 : false" << std::endl;
	}

	if (Value1 == 7 && Value2 < 4)
	{
		std::cout << "Condition 2 : true" << std::endl;
	}
	else
	{
		std::cout << "Condition 2 : false" << std::endl;
	}

	if (Value1 == 7 || Value2 > 4)
	{
		std::cout << "Condition 3 : true" << std::endl;
	}
	else
	{
		std::cout << "Condition 3 : false" << std::endl;
	}

	return 0;
}