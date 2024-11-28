//Дано трехзначное число.
//а) Верно ли, что все его цифры одинаковые ?
//б) Определить, есть ли среди его цифр одинаковые.
#include <iostream>
#include <sstream>

static bool checkNumberA(int c) {
    int c1 = c % 10;     // последняя цифра
    int c2 = (c/10)%10;  //средняя цифра
    int c3 = c / 100;    // первая цифра

    if (c1 == c2 && c2 == c3) 
    {
        return true;
    }
    return false;
}

static bool checkNumberB(int c) {
    int c1 = c % 10;     // последняя цифра
    int c2 = (c / 10) % 10;  //средняя цифра
    int c3 = c / 100;    // первая цифра

    if (c1 == c2 || c2 == c3 || c3 == c1) 
    {
        return true;
    }
    return false;
}

int main()
{
    std::string aString;
    std::cout << "Enter a: " << std::endl;
    std::cin >> aString;
    int a = std::stoi(aString);
    bool resulteA = checkNumberA(a);

    if (resulteA == true) 
    {
        std::cout <<"all the numbers are the same" << std::endl;
    }
    else
    {
        std::cout << "not all the numbers are the same" << std::endl;
    }

    bool resulteB = checkNumberB(a);

    if (resulteB == true)
    {
        std::cout << "there are identical numbers" << std::endl;
    }
    else
    {
        std::cout<<"there are no identical numbers" << std::endl;

    }


}