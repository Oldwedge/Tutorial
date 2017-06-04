#include <iostream>
int main()
{
	//Create char string and output it
	//char Text[] = { 'h','e','l','l','o' }; can be done in a simpler way.
	//c++ automatically cretes a char array from the string
	char Text[] = "hello";
	//and I can output it using cout
	std::cout << Text << std::endl;

	std::cout << "Text[]" << std::endl;
	//Output all chars with a for loop
	for (int i = 0;i < sizeof(Text);i++)
	{
		//the array has 6 elements, this is explained by the terminal (0) in the end when creating the array automatically
		std::cout << i << " element contains: " << Text[i]; 
		std::cout << ", integer value = " << int(Text[i]) << std::endl;	
	}

	char AnotherText[] = { 'h','e','l','l','o' };

	std::cout << "AnotherText[]" << std::endl;
	//Output all chars with a for loop
	for (int i = 0; i < sizeof(AnotherText); i++)
	{
		//the array has 6 elements, this is explained by the terminal (0) in the end when creating the array automatically
		std::cout << i << " element contains: " << AnotherText[i];
		std::cout << ", integer value = " << int(Text[i]) << std::endl;
	}

	//Output all chars with a while loop
	int i = 0;

	//this will give "hello world" since it's a 6 element array, the sixth showing up as blank
	while (i < sizeof(Text))
	{
		std::cout << Text[i] << std::flush;
		i++;
	};

	std::cout << "world" << std::endl;

	i = 0;

	//Output all chars with a while loop
	//this will give "helloworld" since it's a 5 element array
	while (i < sizeof(AnotherText))
	{
		std::cout << AnotherText[i] << std::flush;
		i++;
	};

	std::cout << "world" << std::endl;


	return 0;
}