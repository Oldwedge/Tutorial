#include <iostream>

/*

+
-
*
/
++	i = i + 1
--	i = i - 1
+=	i = i + j
-=	i = i - j
*=	i = i * j
/=	i = i / j
% 
%=
precedence

*/

int main()
{
	//remainder is thrown away
	int Value1 = 7 / 2;
	//even if declared as double 
	double Value2 = 7 / 2;

	//one value as decimal works fine
	double Value3 = 7.0 / 2;
	//or simple casting one or both of the numbers to double 
	double Value4 = (double)7 / 2;
	
	//remainder is thrown away
	int Value5 = 7.3;
	
	std::cout << Value1 << std::endl;
	std::cout << Value2 << std::endl;
	std::cout << Value3 << std::endl;
	std::cout << Value4 << std::endl;
	std::cout << Value5 << std::endl;

	std::cout << "==============================" << std::endl;

	Value1 = 8;
	//same as: Value1 = Value1 + 1
	Value1 += 1;
	std::cout << Value1 << std::endl;

	Value2 = 10;
	//same as: Value2 = Value2 / 5
	Value2 /= 5;
	std::cout << Value2 << std::endl;

	//mod division, will assign the remainder to Value5
	//in this case, 13 / 5 gives a remainder of 3
	Value5 = 13 % 5;
	std::cout << Value5 << std::endl;


	return 0;
}