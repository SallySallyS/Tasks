
#include <iostream>
#include <sstream>
//Дана сторона квадрата.Найти его периметр.
static double perimeter(double a) {
	return 4 * a;
}
int main()
{
	std::cout << "Enter: ";
	std::string aString;
	std::cin >> aString;
	double a = std::stoi(aString);
	std::cout <<"Perimeter: "<< perimeter(a) << std::endl;
	return 0;
}

