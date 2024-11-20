
#include <iostream>

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
		double x = 12;
		double y = 32.1;
		std::cout << z(x,y) << std::endl;
	}
	{
		double a = 163;
		double b = 98.5;
		std::cout << x(a, b) << std::endl;

	}
	return 0;
}
