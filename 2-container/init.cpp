#include <iostream>

int main()
{
    using namespace std;
    float a[4]; // 不会初始化
    for (int i=0; i<4; i++) {
        cout << a[i] << ' ';
    }
    cout<<endl;
    float b[4] = {1}; // 均初始化
    for (int i=0; i<4; i++) {
        cout << b[i] << ' ';
    }
    cout<<endl;
    float c[4] = {}; // 均初始化
    for (int i=0; i<4; i++) {
        cout << c[i] << ' ';
    }
    cout<<endl;
    float p[4] {}; // 可以省略=
    bool x = '\0'==0;
    cout <<  x << endl;

}