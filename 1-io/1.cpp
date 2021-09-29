#include <iostream>

int main()
{
    // std::cin.get();
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0; // 这样写在C语言中会报错
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is "
    << v1+ v2 << std::endl;
    std::cout << 1.23 << std::endl;
    // std::cin.sync(); 也不行
    // std::cin.clear(); // 没有用处， 没有清除缓存中\n
    // std::cin.get();  // 必须要get两次， 第一次获取的是\n
    char i = std::cin.get();
    // std::cout << "|" << i << "|" << std::endl;
    return 0;
}
/*
1. std是命名空间， :: 是作用于运算符
2. int v1 = 0, v2 = 0这样初始化是允许的
3. 为std::get()第二次才起效果? l
C++中cin.clear()的用法 https://www.cnblogs.com/tonglingliangyong/p/3908463.html
cin.get（）无效  https://www.orcode.com/question/915422_k21cd3.html
*/