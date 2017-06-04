#include <iostream>


void ChangeSomething(double);
void ReallyChangeSomething(double&);

int main()
{
	int Value1 = 8;
	int Value2 = Value1;
	Value2 = 10;
	
	std::cout << "Value1 = " << Value1 << std::endl;
	std::cout << "Value2 = " << Value2 << std::endl;

	//Value3 declared as reference variable to Value1 
	//basically works as an alias, there is only one integer in memory
	int& Value3 = Value1;
	Value3 = 5;

	std::cout << "Value1 = " << Value1 << std::endl;
	std::cout << "Value2 = " << Value2 << std::endl;
	std::cout << "Value3 = " << Value3 << std::endl;

	Value1 = 12;

	std::cout << "Value1 = " << Value1 << std::endl;
	std::cout << "Value2 = " << Value2 << std::endl;
	std::cout << "Value3 = " << Value3 << std::endl;
	
	/*--------------------------------------------------
			Awesome way to change values
	--------------------------------------------------*/

	double DValue = 4.321;
	
	ChangeSomething(DValue);

	std::cout << "DValue = " << DValue << std::endl;
	
	ReallyChangeSomething(DValue);
	
	std::cout << "DValue = " << DValue << std::endl;


	return 0;
}

//this will not have any affect on the DValue in the main function
void ChangeSomething(double DValue)
{
	DValue = 123.4;
}

//this will change DValue without having to return a double from the function 
void ReallyChangeSomething(double& DValue)
{
	DValue = 123.4;
}
