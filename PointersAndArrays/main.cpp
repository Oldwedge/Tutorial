#include <iostream>
#include <string>
int main()
{
	std::string Texts[] = {"one","two","three"};

	int ArraySize = sizeof(Texts) / sizeof(std::string);

	//Loop through an array using pointer and array element reference syntax

	//pointer to first element in the array ("one")
	std::string* pTexts = Texts; 

	for (int i = 0;i < ArraySize;i++)
	{
		std::cout << pTexts[i] << " " << std::flush;
	}

	std::cout << std::endl;
	
	std::cout << "=========================================" << std::endl;

	//Loop through the values in an array by incrementing a pointer

	//pointer to first element in the array ("one")
	std::string* pMoreTexts = Texts;

	for (int i = 0; i < ArraySize; i++)
	{
		//dereference pMoreTexts to print value in adress
		std::cout << *pMoreTexts << " " << std::flush;
		//increment pointer = point to next memory element, which would be next element in the array
		pMoreTexts++;
	}

	std::cout << std::endl;

	std::cout << "=========================================" << std::endl;

	//Loop through the values in an array, stopping by comparing the value of two pointers

	//same result as std::string* pFirstElement = Texts;
	//referencing the memory address that stores Texts[0]
	std::string* pCurrentElement = &Texts[0];
	//lastelement of the array
	std::string* pLastElement = &Texts[2];
	
	do
	{
		std::cout << *pCurrentElement << " " << std::flush;
		pCurrentElement++;
	} 
	while
	(
		pCurrentElement <= pLastElement
	);
	
	std::cout << std::endl;

	std::cout << "=========================================" << std::endl;

	//another loop

	pCurrentElement = &Texts[0];

	while (true)
	{
		std::cout << *pCurrentElement << " " << std::flush;

		if (pCurrentElement == pLastElement)
		{
			break;
		}

		pCurrentElement++;
	}

	std::cout << std::endl;

	return 0;
}