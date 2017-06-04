#include <iostream>
#include <iomanip>


int main()
{
	//compare precision of float vs double vs long double
	float FValue = 43.187984187984187984187984187984187984187984;
	double DValue = 43.187984187984187984187984187984187984187984;
	long double LDValue = 43.187984187984187984187984187984187984187984;

	// using <iomaip> to format, fixed
	std::cout << "f : "  << std::fixed << FValue << std::endl;
	std::cout << "d : " << std::fixed << DValue << std::endl;
	std::cout << "ld : " << std::fixed << LDValue << std::endl;

	// using <iomaip> to format, scifi
	std::cout << "f : " << std::scientific << FValue << std::endl;
	std::cout << "d : " << std::scientific << DValue << std::endl;
	std::cout << "ld : " << std::scientific << LDValue << std::endl;

	// using <iomaip> to set precision, fixed
	std::cout << "f : " << std::fixed << std::setprecision(50) << FValue << std::endl;
	std::cout << "d : " << std::fixed << std::setprecision(100) << DValue << std::endl;
	std::cout << "ld : " << std::fixed << std::setprecision(100) << LDValue << std::endl;

	std::cout << "Number of bytes float: " << sizeof(FValue) << std::endl;
	std::cout << "Number of bytes double: " << sizeof(DValue) << std::endl;
	std::cout << "Number of bytes long double: " << sizeof(LDValue) << std::endl;

	return 0;
}