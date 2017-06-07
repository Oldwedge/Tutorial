#include <iostream>
#include <string>

void Show1(std::string []);
void Show2(int, std::string []);
void Show3(int, std::string*);
void Show4(std::string(&)[3]);

//function that returns a pointer to an array
std::string* CreateArray()
{
	/*
	//don't return pointers to local variables! it will not survive outside this function (nullpointer) 
	std::string FunctionArray[] = { "one","two","three" };
	return FunctionArray;
	*/
	//use the new keyword instead to create an object in the heap instead
	std::string *PFunctionArray = new std::string[3]{ "four","five","six" };
	return PFunctionArray;
}

//create a function to de-allocate memory for each function that allocates memory
void KillArray(std::string* PFunctionArray)
{
	delete [] PFunctionArray;
}

int main()
{
	std::string ANArray[] = { "one","two","three" };

	std::cout << "Actual size of array: " << sizeof(ANArray) << std::endl;
	//need to keep track of numer of elements
	Show1(ANArray);
	
	//provide number of elements as parameter to function
	int NElements = sizeof(ANArray) / sizeof(std::string);
	Show2(NElements, ANArray);
	
	//create pointer to the first element of the array and pass to function
	std::string* PANArray = &ANArray[0];
	Show3(NElements, PANArray);

	Show4(ANArray);

	//the new array allocates memory in the heap
	std::string *PointerToArray = CreateArray();

	//trying Show3 again with the new pointer
	Show3(NElements, PointerToArray);
	
	//free the memory by deleting the object when not used
	KillArray(PointerToArray);

	return 0;
}

//in Show1 and Show2 the entire array will be copied in memory, in Show3 only the pointer will cost memory

void Show1(std::string ANArray[])
{
	std::cout << "Size of array reported by function Show1: " << sizeof(ANArray) << std::endl;
	for (int i = 0;i < 3; i++)
	{
		std::cout << ANArray[i] << std::endl;
	}
}


void Show2(int NElements, std::string ANArray[])
{
	for (int i = 0; i < NElements; i++)
	{
		std::cout << ANArray[i] << std::endl;
	}
}

void Show3(int NElements, std::string* PANArray)
{
	std::cout << "Size of array reported by function Show3: " << sizeof(PANArray) << std::endl;
	for (int i = 0; i < NElements; i++)
	{
		std::cout << PANArray[i] << std::endl;
	}
}

//why oh why would I want this? Show1 appears to be the same thing basically?
void Show4(std::string (&ANArray)[3])
{
	std::cout << "Size of array reported by function Show4: " << sizeof(ANArray) << std::endl;
	for (int i = 0; i < sizeof(ANArray)/sizeof(std::string); i++)
	{
	std::cout << ANArray[i] << std::endl;
	}
}

