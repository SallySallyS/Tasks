
#include <iostream>
#include<sstream>

//а) вычисления значения функции
//z = x * x * x - 2.5 * x * y + 1.78 * x * x -2.5 * y + 1 
//
//при любых значениях х и y;
//б) вычисления значения функции
//
//x = 3.56 * a + b * b * b - 5.8 * b * b + 3.8 * a - 1.5
//
//при любых значениях a и b.

static double z(double x, double y) {
	return x * x * x - 2.5 * x * y + 1.78 * x * x - 2.5 * y + 1;
}

static double x(double a, double b) {
	return 3.56 * a + b * b * b - 5.8 * b * b + 3.8 * a - 1.5;
}

int main()
{
	{
		//double x = 12;
		//double y = 32.1;
		
		std::string xString;
		std::string yString;
		std::cout << "Enter x: " << std::endl;
		std::cin >> xString;
		std::cout << "Enter y: " << std::endl;
		std::cin >> yString;
		double x = std::stoi(xString);
		double y = std::stoi(yString);
		std::cout << z(x,y) << std::endl;
	}
	{
		//double a = 163;
		//double b = 98.5;
		
		std::string aString;
		std::string bString;
		std::cout << "Enter a: " << std::endl;
		std::cin >> aString;
		std::cout << "Enter b: " << std::endl;
		std::cin >> bString;
		double a = std::stoi(aString);
		double b = std::stoi(bString);
		std::cout << x(a, b) << std::endl;

	}
	return 0;
}
