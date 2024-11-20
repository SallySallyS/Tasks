

#include <iostream>
#include <vector>
#include <sstream>
//Даны вещественные числа a, b, c (a != 0).Выяснить, имеет ли уравнение
//
//a * x * x + b*x + c = 0
//
//вещественные корни.

static std::vector<double> quadraticEquation(double a, double b, double c) {
	double discr = b * b - 4 * a * c;
	std::vector<double> result = {};
	if (a == 0) {
		std::cout << "it's not a quadratic equation " << std::endl;
		return result;
	}
	if (discr < 0) {
		return result;
	}
	if (discr == 0) {
		double x = -b / (2 * a);
		result.push_back(x);
		return result;
	}
	double x1 = (-b + sqrt(discr)) / (2 * a);
	double x2 = (-b - sqrt(discr)) / (2 * a);
	result.push_back(x1);
	result.push_back(x2);
	return result;
}

int main()
{
	std::string aString, bString, cString;

	std::cout << "Enter a: " << std::endl;
	std::cin >> aString;
	std::cout << "Enter b: " << std::endl;
	std::cin >> bString;
	std::cout << "Enter c: " << std::endl;
	std::cin >> cString;

	double a = std::stoi(aString);
	double b = std::stoi(bString);
	double c = std::stoi(cString);

    std::vector<double> res = quadraticEquation(a, b, c);

	std::cout << "Roots of the equation: " << std::endl;
	for (int i = 0; i < res.size(); i++) {
		std::cout << res[i] << " ";
	}
	return 0;
}

