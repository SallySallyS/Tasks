
#include <iostream>
#include <sstream>

//1.4.Составить программу вывода на экран числа, вводимого с клавиатуры.По -
//сле выводимого числа должно следовать сообщение " - вот какое число Вы ввели".

int main()
{
	std::cout << "Enter: ";
	std::string aString;
	std::cin >> aString;
	try 
	{
		int a = std::stoi(aString);
		std::cout << "You enter: " << a << std::endl;
	}
	catch(...)
	{
		std::cout << "Error" << std::endl;
	}
}
