#include <iostream>
#include <My_long_long_int.h>
#include <assert.h>

int main()
{
    My_long_long_int uno(1);
    My_long_long_int dos(2);
    My_long_long_int tres;
    My_long_long_int cinco(5);
    My_long_long_int cero(0);
    assert((uno + dos).getValue() == 3);
    assert((cero/uno).getValue() == 0);
    assert((++cero).getValue() == 1);
    assert((cero == uno) == true);
    assert((--cero).getValue() == 0);
    assert((cero != uno) == true);
    assert((cero <= uno) == true);
    assert((cero < uno) == true);
    assert((dos >= uno) == true);
    assert((dos > uno) == true);
    uno/=dos;
    assert(uno.getValue() == 0);
    ++uno;
    assert((uno + uno).getValue() == 2);
    tres = uno + dos;
    assert((cinco%tres).getValue() == 2);
    assert((cinco/tres).getValue() == 1);
    std::cout << "all tests passed successfully" << std::endl;
    return 0;
}
