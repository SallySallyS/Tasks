
#include <iostream>
/*Указать значение величины x после выполнения следующих операторов при -
сваивания:
а)
    x:= 10
    x:= -10
б)
    x:= 17.5
    x:= -2 * x
в)
    x:= 60
    x:= x-1
    x:= 0
г)
    x:= -50
    x:= -25
    x:= x+k 
*/
//using namespace std;
int main()
{
    {
        int x = 10;
        x = -10;
        std::cout << x << std::endl;
    }
    {
        double x = 17.5;
        x = -2 * x;
        std::cout << x << std::endl;
    }
    {
        int x = 60;
        x = x - 1;
        x = 0;
        std::cout << x << std::endl;
    }
    {
        int k = 9;
        int x = -50;
        x = -25;
        x = x + k;
        std::cout << x << std::endl;
    }
    return 0;

}

