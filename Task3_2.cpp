
#include <iostream>
//Вычислить значение логического выражения при следующих значениях логи -
//ческих величин X, Y и Z : X = Ложь, Y = Истина, Z = Ложь :
//
//	а) X или Z; б) X и Y; c) X и Z.

int main()
{
	bool x = false;
	bool y = true;
	bool z = false;

	bool a = x || z;
	bool b = x && y;
	bool c = x && z;

	std::cout << a << b << c << std::endl;
	return 0;
}
