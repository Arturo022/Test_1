#include <iostream>
#include <My_long_long_int.h>


int main()
{
    My_long_long_int uno(1);
    My_long_long_int dos(2);
    My_long_long_int cero(0);
    long long int a = (uno + dos).getValue();
    std::cout << a << std::endl;
    long long int b = (cero/uno).getValue();
    std::cout << b << std::endl;

    return 0;
}
