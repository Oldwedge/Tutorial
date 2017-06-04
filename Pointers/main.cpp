#include <iostream>

void Manipulate(double);
void ManipulateUsingPointer(double*);

int main()
{
	int NValue =8;

	//pNValue is assigned the memory location where NValue is stored using '&'
	int* pNValue = &NValue;

	std::cout << "Int value: " << NValue << std::endl;
	std::cout << "Pointer Int address: " << pNValue << std::endl;

	//the actual value stored in the address can be retrieved with '*' (derferencing a pointer)
	std::cout << "Int value via pointer: " << *pNValue << std::endl;
	std::cout << "===========================" << std::endl;
	double DValue = 123.4;
	
	std::cout << "1. Value of double DValue in main: " << DValue << std::endl;
	Manipulate(DValue);
	std::cout << "4. Value of double DValue in main: " << DValue << std::endl;

	std::cout << "5. Value of double DValue in main: " << DValue << std::endl;
	
	ManipulateUsingPointer(&DValue);
	std::cout << "8. Value of double DValue in main: " << DValue << std::endl;

	return 0;
}

void Manipulate(double DValue)
{
	std::cout << "2. Value of double DValue in Manipulate: " << DValue << std::endl;
	DValue = 10.0;
	std::cout << "3. Value of double DValue in Manipulate: " << DValue << std::endl;
}

void ManipulateUsingPointer(double* pDValue)
{
	std::cout << "6. Value of double DValue in ManipulateUsingPointer: " << *pDValue << std::endl;
	*pDValue = 10.0;
	std::cout << "7. Value of double DValue in ManipulateUsingPointer: " << *pDValue << std::endl;
}

