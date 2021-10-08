#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    
    // vector<int> a(10, 2);
    // cout << a[0] << endl;
    // cout << a[10] << endl;
    // int b[4] = {1,2,3,4};
    vector<int> a;
    vector<int> b;
    b = vector<int>({1,2,3}); // TODO 貌似其中不可以是表达式
    a.reserve(3); // 可以预先分配内存以提升处理效率, 并且与分配后， 貌似会初始化
    cout << "【init】capacity: " << a.capacity();
    cout << " begin: " << *a.begin() <<  endl;
    a.push_back(99);
    a.push_back(98);
    cout << "at: " << a.at(0) << endl;
    a.push_back(1234);
    // a[2] = 4;
    cout << "capacity after add one element: " << a.capacity() << endl;
    for (int i=0; i<3; i++) {
        cout << "a"<< "[" << i << "]" << " = " << a[i] << endl;
    }
    a.assign(4, 100);
    for (int i=0; i<4; i++) {
        cout << "a"<< "[" << i << "]" << " = " << a[i] << endl;
    }
    cout << a.capacity() << endl;
    
    a.reserve(7);
    for (int i=0; i<7; i++) {
        cout << "a"<< "[" << i << "]" << " = " << a[i] << endl;
    }
    cout << a.capacity() << endl;
    vector<int>::iterator it = a.begin();
    it++;
    cout << "distance of iterator: " << it-a.begin() << endl;
    // 显然C++对iterator的++与+/-行为进行了重构
    
    return 0;
}
/*
1. vector超范围会怎么样怎么办, 像array一样， 会出现一个不确定的数值，或者异常， 不会对这个做检查
2. array的缺点
    * 定义时只能使用常量或者字面的整数， 并能使用运行过程中产生的常量
    * 一旦长度定义便不可以修改， 要扩增， 只能拷贝到一个更大的数组中
    * 没有相应的方法去操作自己 （略牵强）
    * 不能用另一个数组来初始化 （略牵强）
3. C++是如何扩增一个数列的? 也是需要动态创建一个更大的数组， 然后拷贝
4. vector的方法
    * assign： 给从头开始的n个元素赋初值， 并且当cap不够时会扩增， 类似于np.full
    * reserve: 预扩增，并且初始化扩增的值为默认初始值， 比如int为0, 当n<cap时不会起作用
    * push_back: 从“当前位置”往数组后加入或修改元素， 当并且将“当前位置”的值+1
5. vector的重要概念
    * vector中有三个指针来保持状态， start | finish | end_of_storage
    * start --> finish是size的返回结果, start --> end_of_storage 是capacity的返回结果

STL vector push_back详解
https://www.cnblogs.com/yao2yaoblog/p/7170239.html
*/