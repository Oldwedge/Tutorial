#include <iostream>

int main()
{
	float MyBoat = 1.1;
	double YourBoat = 1.2;

	//precision of float is not good enough
	//when comparing, you basically need to use "less- or greater than" a set number
	if (MyBoat == 1.1) 
	{
		std::cout << "It's a match for MyBoat" << std::endl;
	}
	else if((MyBoat < 1.10000001)) //8 decimals
	{
		std::cout << "It's close to a match for MyBoat checking with 8 decimals" << std::endl;
	}
	else if ((MyBoat < 1.1000001)) //7 decimals
	{
		std::cout << "It's close to a match for MyBoat checking with 7 decimals" << std::endl;
	}
	else
	{
		std::cout << "it's not a match for MyBoat" << std::endl;
	}

	//precision of double is good enough
	if (YourBoat == 1.2)
	{
		std::cout << "It's a match for YourBoat" << std::endl;
	}
	else
	{
		std::cout << "it's not a match for YourBoat" << std::endl;
	}



	return 0;
}