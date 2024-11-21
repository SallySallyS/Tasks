//4.21.Определить, является ли число a делителем числа b ?

#include <iostream>
#include <sstream>


int main()
{
	std::string bString;
	std::string aString;
	std::cout << "Enter b: " << std::endl;
	std::cin >> bString;
	std::cout << "Enter a: " << std::endl;
	std::cin >> aString;
	int a = std::stoi(aString);
	int b = std::stoi(bString);
	if (a == 0) 
	{
		std::cout << "You entered an incorrect value a " << std::endl;
	}
	if (b % a == 0) 
	{
		std::cout << "a is a divisor of b" << std::endl;
	}
	else 
	{
		std::cout << "a is not divisor of b" << std::endl;
	}
}

