#include <iostream>

int main()
{
    using namespace std;
    // 字符串初始化

    // C风格
    char zero_date[20] = "Le Chapon Dodu";
    char first_date[] = "Le Chapon Dodu";
    // 混合风格
    char mid_date[20] = {"Le Chapon Dodu"};
    // C++风格
    char second_date[] = {"Le Chapon Dodu"}; 
    string third_date {"Le Chapon Dodu"};
    string fourth_date = {"Le Chapon Dodu"};
    // string fifth_date "Le Chapon Dodu"; Invalid
    cout << "zero_date: " << zero_date << endl;
    cout << "first_date: " << first_date << endl;
    cout << "mid_date: " << mid_date << endl;
    cout << "second_date: " << second_date << endl;
    cout << "third_date: " << third_date << endl;
    cout << "fourth_date: " << fourth_date << endl;
    
}

/*
1. 须知， "啊吧啊吧"其实是一个字符数组的地址
2. char mid_date[20] = {"Le Chapon Dodu"} 会把之后的位全部变为\0
3. 如果初始化长度大于字符串限定的长度会怎么样？ 编译器会做检查， 不会通过
4. string不用指定长度
*/