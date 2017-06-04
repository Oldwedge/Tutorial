#include <iostream>
#include "Xperson.h"
int main()
{
	Xperson Person1("Martin",41);
	std::cout << Person1.ToString() << std::endl;
	return 0;
}