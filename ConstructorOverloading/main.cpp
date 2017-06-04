#include <iostream>
#include "AnotherPerson.h"

int main()
{

	AnotherPerson Human;
	AnotherPerson Human2("Kalle");
	AnotherPerson Human3(5);
	AnotherPerson Human4("Pelle",83);

	std::cout << Human.GetPersonData() << std::endl;
	std::cout << Human2.GetPersonData() << std::endl;
	std::cout << Human3.GetPersonData() << std::endl;
	std::cout << Human4.GetPersonData() << std::endl;

	return 0;
}