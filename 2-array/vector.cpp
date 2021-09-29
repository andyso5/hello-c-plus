#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    
    // vector<int> a(10, 2);
    // cout << a[0] << endl;
    // cout << a[10] << endl;
    vector<int> a;
    cout << "init: " << a.capacity() << endl;
    a.reserve(3);
    a.push_back(1);
    cout << "add one element: " << a.capacity() << endl;
    return 0;
}
/*
1. vector超范围会怎么样怎么办, 像array一样， 会出现一个不确定的数值，或者异常， 不会对这个做检查
2. array的缺点
    * 定义时只能使用常量或者字面的整数， 并能使用运行过程中产生的常量
    * 一旦长度定义便不可以修改， 要扩增， 只能拷贝到一个更大的数组中
    * 没有相应的方法去操作自己 （略牵强）
    * 不能用另一个数组来初始化 （略牵强）
3. TODO C++是如何扩增一个数列的。也是需要动态创建一个更大的数组， 然后拷贝

*/