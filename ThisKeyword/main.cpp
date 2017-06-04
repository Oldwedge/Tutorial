#include <iostream>
#include "YetAnotherPerson.h"
int main()
{
	YetAnotherPerson YPerson;
	YetAnotherPerson YPerson2;
	
	YPerson.SetName("SetName");
	std::cout << YPerson.GetName() << "; Memory location = " << &YPerson << std::endl;
	
	YPerson2.SetName2("It doesn't matter!");
	std::cout << YPerson2.GetName() << "; Memory location = " << &YPerson2 << std::endl;
	return 0;
}