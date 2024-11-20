
#include <iostream>
#include <sstream>

//Дано трехзначное число.В нем зачеркнули первую слева цифру и приписали
//ее в конце.Найти полученное число.

static int numberDivide(int a) { 
	// a=986
	int a1 = (a % 100)*10;//860
	a1 = a1 + a / 100;
	return a1;
}

int main()
{
	std::cout << "Enter: ";

	std::string aString;
	std::cin >> aString;
	int a = std::stoi(aString);
	std::cout << numberDivide(a) << std::endl;
	return 0;

}

