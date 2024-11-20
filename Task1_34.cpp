
#include <iostream>

static double solution(double a, double b) {
	if (a == 0) {
		std::cout << "error" << std::endl;
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
