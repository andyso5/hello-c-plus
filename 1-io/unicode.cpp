#include <iostream>

int main()
{
    bool k = true;
    char s[] = "aa";
    using namespace std;
    wchar_t a = L'傲';
    char16_t b = u'萧';
    // char c = '萧';
    char c = '1';
    cout << "萧傲" << a << b << c << "流量" << s << endl;
    wcout << a << b << c << endl;
    cout << "size of s is " << sizeof(s) << endl;
    return 0;
}
/*
在实验中一个汉字占三个字符， ascii码中的字符占一个
*/