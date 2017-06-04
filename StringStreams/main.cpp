#include <iostream>
#include <sstream>
#include <ostream>

int main()
{
	std::string Name = "Bob";
	int Age = 32;

	//not working, need to push to a stringstream, req. include <sstream> 
	//std::string Info = "Name: " + Name + "; Age: " + Age;

	//stringstream
	std::stringstream Info; 
	Info << "Name: " << Name << "; Age: " << Age;

	//not working, need to call ssteam .str() to output content
	//std::cout << Info << std::endl;

	//Info.str()
	std::cout << Info.str() << std::endl;
	
	return 0;
}