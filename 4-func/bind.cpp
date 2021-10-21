#include <iostream>
#include <functional>

using namespace std;

void func(int a, int b, int c, int d)
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}

int main()
{
    auto p_func = bind(func, 10, placeholders::_1, 20, placeholders::_2);
    p_func(1, 2);
    return 0;
}