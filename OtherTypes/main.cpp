#include <iostream> 


int main()
{
	bool bValue = true;

	std::cout << bValue << std::endl;
	std::cout << "hi" << std::endl;

	char c = 55;
	std::cout << "char 55 = " << c << std::endl;
	c = '7';
	std::cout << "char '7' = " << c << std::endl;
	c = 'g';
	std::cout << "char 'g' = " << c << std::endl;
	std::cout << "char int('g') = " << int(c) << std::endl;

	wchar_t ValueWChar = '3';
	std::cout << "wchar_t '3' = " << ValueWChar << std::endl;

	std::cout << "size of char" << sizeof(c) << std::endl;
	std::cout << "size of wchar_t" << sizeof(ValueWChar) << std::endl;
    
	return 0;
}

