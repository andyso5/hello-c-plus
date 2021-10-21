#include <iostream>
#include <stdlib.h>

int main(void)
{
    using namespace std;
    string a="11.2";
    float b = atof(a.c_str());
    float c;
    cout << "float: " << b << endl;

    a = "";
    b = atof(a.c_str());
    c = atoi(a.c_str());
    cout << "float: " << b << endl;
    cout << "int: " << c << endl;
    return 0;
}

/*
atoi与atof都不会因为输入参数是空字符串而报错， 会返回结果0, 但是python会
*/