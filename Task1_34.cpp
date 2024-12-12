
#include <iostream>
//Составить программу решения линейного уравнения
// ax+b=0
// (a != 0).
static double solution(double a, double b) {
	if (a == 0) {
		std::cout << "Error: 'a' can't be equal to 0" << std::endl;
		return 0 ;
	}
	return -b / a;

}

int main()
{
	double a = 8;
	double b = 9;
	std::cout <<solution(a, b)<< std::endl;
	return 0;
}
